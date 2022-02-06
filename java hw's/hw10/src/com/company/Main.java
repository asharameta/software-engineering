package com.company;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.IOException;
import java.nio.file.*;
import java.nio.file.attribute.FileAttribute;

public class Main {


	public static void main(String[] args) {
		try {
			Files.createDirectories(FileSystems.getDefault().getPath("./Dir0/Dir1/Dir11/Dir111"));
			Files.createDirectories(FileSystems.getDefault().getPath("./Dir0/Dir2"));
			Files.createDirectories(FileSystems.getDefault().getPath("./Dir0/Dir3/Dir31"));
			Files.createDirectories(FileSystems.getDefault().getPath("./Dir0/Dir3/Dir32"));

		} catch (IOException e) {
			e.printStackTrace();
		}

		try {
			Files.createFile(FileSystems.getDefault().getPath("./Dir0/Dir1/Dir11/File1.txt"));
			Files.createFile(FileSystems.getDefault().getPath("./Dir0/Dir1/Dir11/File2.txt"));
			Files.createFile(FileSystems.getDefault().getPath("./Dir0/Dir1/Dir11/Dir111/File3.txt"));
			Files.createFile(FileSystems.getDefault().getPath("./Dir0/Dir2/File4.txt"));
			Files.createFile(FileSystems.getDefault().getPath("./Dir0/Dir3/Dir31/File5.txt"));
		} catch (IOException e) {
			e.printStackTrace();
		}

		///////////////////////////////////////////////////////

		try {
			Files.copy(
					FileSystems.getDefault().getPath("./Dir0/Dir1/Dir11/File1.txt"),
					FileSystems.getDefault().getPath("./Dir0/Dir3/Dir32/File1.txt"),
					StandardCopyOption.REPLACE_EXISTING);
		} catch (IOException e) {
			e.printStackTrace();
		}

		Path p1 = FileSystems.getDefault().getPath("./Dir0/Dir1/Dir11/File1.txt");
		Path p2 = FileSystems.getDefault().getPath("Dir0/Dir2/File4.txt");
		try {
			Files.copy(p1, p2, StandardCopyOption.REPLACE_EXISTING);
		} catch (IOException e) {
			e.printStackTrace();
		}

		Path p3 = FileSystems.getDefault().getPath("./Dir0/Dir1/Dir11/File1.txt");
		Path p4 = FileSystems.getDefault().getPath("./Dir0/Dir1/Dir11/File2.txt");
		try (BufferedReader reader = Files.newBufferedReader(p3);
			 BufferedWriter writer = Files.newBufferedWriter(p4, StandardOpenOption.TRUNCATE_EXISTING)) {
			reader
					.lines()
					.forEach(
							line -> {
								line = line.replace('a', '@');
								try {
									writer.write(line);
									writer.newLine();
								} catch (IOException e) {
									e.printStackTrace();
								}
							});
		} catch (IOException e) {
			e.printStackTrace();
		}





		//Path copied2 = Paths.get("..\\dir0\\dir1\\dir11\\File2.txt");

	}
}
