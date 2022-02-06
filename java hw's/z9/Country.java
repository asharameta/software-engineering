package z9;

public enum Country {
	POLAND("Polska",38265000),
	FRANCE("France",67522000),
	GERMANY("Deutschland",83019200);
	
	private final String orginalName;
	private final int  population;
	
	private Country(String name,int population) {
		this.orginalName = name;
		this.population = population;
	}

	public String getOrginalName() {
		return orginalName;
	}

	public int getPopulation() {
		return population;
	}

}
