package z9;

public class MainEnum {
	
	public static void main(String args[]) {
		Country[] countries = Country.values();
		for(Country country:countries)
			System.out.println(country.getOrginalName()+" "+country.getPopulation());
	}

}
