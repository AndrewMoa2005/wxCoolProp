/***************************************************************
 * Name:      decsription.h
 * Purpose:
 * Author:    陈瑞祥 (Andrew.Moa2005@163.om)
 * Created:   2020-03-08
 * Copyright: 陈瑞祥 ()
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

 //#include "description.h"

wxString paramDescription(const wxString& param)
{
	// Input/Output
	if (param.IsSameAs("DELTA", false))
		return (_("Dimensionless, Input/Output, Reduced density (rho/rhoc)"));
	else if (param.IsSameAs("Dmolar", false))
		return (_("mol/m^3, Input/Output, Molar density"));
	else if (param.IsSameAs("Dmass", false) || param.IsSameAs("D", false))
		return (_("kg/m^3, Input/Output, Mass density"));
	else if (param.IsSameAs("Hmolar", false))
		return (_("J/mol, Input/Output, Molar specific enthalpy"));
	else if (param.IsSameAs("Hmass", false) || param.IsSameAs("H", false))
		return (_("J/kg, Input/Output, Mass specific enthalpy"));
	else if (param.IsSameAs("P", false))
		return (_("Pa, Input/Output, Pressure(Absolute)"));
	else if (param.IsSameAs("Q", false))
		return (_("mol/mol, Input/Output, Mass vapor quality"));
	else if (param.IsSameAs("Smolar", false))
		return (_("J/mol/K, Input/Output, Molar specific entropy"));
	else if (param.IsSameAs("Smass", false) || param.IsSameAs("S", false))
		return (_("J/kg/K, Input/Output, Mass specific entropy"));
	else if (param.IsSameAs("Tau", false))
		return (_("Dimensionless, Input/Output, Reciprocal reduced temperature (Tc/T)"));
	else if (param.IsSameAs("T", false))
		return (_("K, Input/Output, Temperature"));
	else if (param.IsSameAs("Umolar", false))
		return (_("J/mol, Input/Output, Molar specific internal energy"));
	else if (param.IsSameAs("Umass", false) || param.IsSameAs("U", false))
		return (_("J/kg, Input/Output, Mass specific internal energy"));
	// Output
	else if (param.IsSameAs("acentric", false))
		return (_("Dimensionless, Output, Acentric factor"));
	else if (param.IsSameAs("alpha0", false))
		return (_("Dimensionless, Output, Ideal Helmholtz energy"));
	else if (param.IsSameAs("alphar", false))
		return (_("Dimensionless, Output, Residual Helmholtz energy"));
	else if (param.IsSameAs("speed_of_sound", false) || param.IsSameAs("A", false))
		return (_("m/s, Input/Output, Speed of sound"));
	else if (param.IsSameAs("Bvirial", false))
		return (_("Dimensionless, Output, Second virial coefficient"));
	else if (param.IsSameAs("conductivity", false) || param.IsSameAs("L", false))
		return (_("W/m/K, Output, Thermal conductivity"));
	else if (param.IsSameAs("Cp0mass", false))
		return (_("J/kg/K, Output, Ideal gas mass specific constant pressure specific heat"));
	else if (param.IsSameAs("Cp0molar", false))
		return (_("J/mol/K, Output, Ideal gas molar specific constant pressure specific heat"));
	else if (param.IsSameAs("Cpmolar", false))
		return (_("J/mol/K, Output, Molar specific constant pressure specific heat"));
	else if (param.IsSameAs("Cvirial", false))
		return (_("Dimensionless, Output, Third virial coefficient"));
	else if (param.IsSameAs("Cvmass", false) || param.IsSameAs("O", false))
		return (_("J/kg/K, Output, Mass specific constant volume specific heat"));
	else if (param.IsSameAs("Cvmolar", false))
		return (_("J/mol/K, Output, Molar specific constant volume specific heat"));
	else if (param.IsSameAs("Cpmass", false) || param.IsSameAs("C", false))
		return (_("J/kg/K, Output, Mass specific constant pressure specific heat"));
	else if (param.IsSameAs("dalpha0_ddelta_consttau", false))
		return (_("Dimensionless, Output, Derivative of ideal Helmholtz energy with delta"));
	else if (param.IsSameAs("dalpha0_dtau_constdelta", false))
		return (_("Dimensionless, Output, Derivative of ideal Helmholtz energy with tau"));
	else if (param.IsSameAs("dalphar_ddelta_consttau", false))
		return (_("Dimensionless, Output, Derivative of residual Helmholtz energy with delta"));
	else if (param.IsSameAs("dalphar_dtau_constdelta", false))
		return (_("Dimensionless, Output, Derivative of residual Helmholtz energy with tau"));
	else if (param.IsSameAs("dBvirial_dT", false))
		return (_("Dimensionless, Output, Derivative of second virial coefficient with respect to T"));
	else if (param.IsSameAs("dCvirial_dT", false))
		return (_("Dimensionless, Output, Derivative of third virial coefficient with respect to T"));
	else if (param.IsSameAs("dipole_moment", false))
		return (_("C m, Output, Dipole moment"));
	else if (param.IsSameAs("FH", false))
		return (_("Dimensionless, Output, Flammability hazard"));
	else if (param.IsSameAs("fraction_max", false))
		return (_("Dimensionless, Output, Fraction (mole, mass, volume) maximum value for incompressible solutions"));
	else if (param.IsSameAs("fraction_min", false))
		return (_("Dimensionless, Output, Fraction (mole, mass, volume) minimum value for incompressible solutions"));
	else if (param.IsSameAs("fundamental_derivative_of_gas_dynamics", false))
		return (_("Dimensionless, Output, Fundamental derivative of gas dynamics"));
	else if (param.IsSameAs("gas_constant", false))
		return (_("J/mol/K, Output, Molar gas constant"));
	else if (param.IsSameAs("Gmolar", false))
		return (_("Dimensionless, Output, Molar specific Gibbs energy"));
	else if (param.IsSameAs("GWP100", false))
		return (_("Dimensionless, Output, 100-year global warming potential"));
	else if (param.IsSameAs("GWP20", false))
		return (_("Dimensionless, Output, 20-year global warming potential"));
	else if (param.IsSameAs("GWP500", false))
		return (_("Dimensionless, Output, 500-year global warming potential"));
	else if (param.IsSameAs("Gmass", false) || param.IsSameAs("G", false))
		return (_("J/kg, Output, Mass specific Gibbs energy"));
	else if (param.IsSameAs("Helmholtzmass", false))
		return (_("J/kg, Output, Mass specific Helmholtz energy"));
	else if (param.IsSameAs("Helmholtzmolar", false))
		return (_("J/mol, Output, Molar specific Helmholtz energy"));
	else if (param.IsSameAs("HH", false))
		return (_("Dimensionless, Output, Health hazard"));
	else if (param.IsSameAs("isentropic_expansion_coefficient", false))
		return (_("Dimensionless, Output, Isentropic expansion coefficient"));
	else if (param.IsSameAs("isobaric_expansion_coefficient", false))
		return (_("1/K, Output, Isobaric expansion coefficient"));
	else if (param.IsSameAs("isothermal_compressibility", false))
		return (_("1/Pa, Output, Isothermal compressibility"));
	else if (param.IsSameAs("surface_tension", false) || param.IsSameAs("I", false))
		return (_("N/m, Output, Surface tension"));
	else if (param.IsSameAs("MOLARMASS", false) || param.IsSameAs("M", false)
		|| param.IsSameAs("MOLAR_MASS", false) || param.IsSameAs("MOLEMASS", false))
		return (_("kg/mol, Output, Molar mass"));
	else if (param.IsSameAs("ODP", false))
		return (_("Dimensionless, Output, Ozone depletion potential"));
	else if (param.IsSameAs("PCRIT", false) || param.IsSameAs("P_CRITICAL", false))
		return (_("Pa, Output, Pressure at the critical point"));
	else if (param.IsSameAs("Phase", false))
		return (_("Dimensionless, Output, Phase index as a float"));
	else if (param.IsSameAs("PH", false))
		return (_("Dimensionless, Output, Physical hazard"));
	else if (param.IsSameAs("PIP", false))
		return (_("Dimensionless, Output, Phase identification parameter"));
	else if (param.IsSameAs("PMAX", false) || param.IsSameAs("P_MAX", false))
		return (_("Pa, Output, Maximum pressure limit"));
	else if (param.IsSameAs("PMIN", false) || param.IsSameAs("P_MIN", false))
		return (_("Pa, Output, Minimum pressure limit"));
	else if (param.IsSameAs("Prandtl", false))
		return (_("Dimensionless, Output, Prandtl number"));
	else if (param.IsSameAs("PTRIPLE", false) || param.IsSameAs("p_triple", false))
		return (_("Pa, Output, Pressure at the triple point (pure only)"));
	else if (param.IsSameAs("P_REDUCING", false))
		return (_("Pa, Output, Pressure at the reducing point"));
	else if (param.IsSameAs("RHOCRIT", false) || param.IsSameAs("RHOMASS_CRITICAL", false))
		return (_("kg/m^3, Output, Mass density at critical point"));
	else if (param.IsSameAs("RHOMASS_REDUCING", false))
		return (_("kg/m^3, Output, Mass density at reducing point"));
	else if (param.IsSameAs("RHOMOLAR_CRITICAL", false))
		return (_("mol/m^3, Output, Molar density at critical point"));
	else if (param.IsSameAs("RHOMOLAR_REDUCING", false))
		return (_("mol/m^3, Output, Molar density at reducing point"));
	else if (param.IsSameAs("SMOLAR_RESIDUAL", false))
		return (_("J/mol/K, Output, Residual molar entropy (sr/R = tau*dar_dtau-ar)"));
	else if (param.IsSameAs("TCRIT", false) || param.IsSameAs("T_CRITICAL", false))
		return (_("K, Output, Temperature at the critical point"));
	else if (param.IsSameAs("TMAX", false) || param.IsSameAs("T_MAX", false))
		return (_("K, Output, Maximum temperature limit"));
	else if (param.IsSameAs("TMIN", false) || param.IsSameAs("T_MIN", false))
		return (_("K, Output, Minimum temperature limit"));
	else if (param.IsSameAs("TTRIPLE", false) || param.IsSameAs("T_TRIPLE", false))
		return (_("K, Output, Temperature at the triple point"));
	else if (param.IsSameAs("T_FREEZE", false))
		return (_("K, Output, Freezing temperature for incompressible solutions"));
	else if (param.IsSameAs("T_REDUCING", false))
		return (_("K, Output, Temperature at the reducing point"));
	else if (param.IsSameAs("VISCOSITY", false) || param.IsSameAs("V", false))
		return (_("Pa s, Output, Viscosity"));
	else if (param.IsSameAs("Z", false))
		return (_("Dimensionless, Output, Compressibility factor"));
	else
		return (_("Unknown Parameter"));
}
