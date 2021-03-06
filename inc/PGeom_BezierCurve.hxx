// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PGeom_BezierCurve_HeaderFile
#define _PGeom_BezierCurve_HeaderFile

#include <Standard_Macro.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard.hxx>
#include <Handle_PGeom_BezierCurve.hxx>

#include <Standard_Boolean.hxx>
#include <Handle_PColgp_HArray1OfPnt.hxx>
#include <Handle_PColStd_HArray1OfReal.hxx>
#include <PGeom_BoundedCurve.hxx>
class PColgp_HArray1OfPnt;
class PColStd_HArray1OfReal;


class PGeom_BezierCurve : public PGeom_BoundedCurve
{

public:

  
  //! Creates a non rational  Bezier curve with default
  //! values.
  Standard_EXPORT PGeom_BezierCurve();
  
  //! Creates a non rational Bezier curve with a set of
  //! poles aCurvePoles and a set of weights aPoleWeight.
  Standard_EXPORT PGeom_BezierCurve(const Handle(PColgp_HArray1OfPnt)& aPoles, const Handle(PColStd_HArray1OfReal)& aWeights, const Standard_Boolean aRational);
  
  //! Set the value of the field rational with <aRational>.
  Standard_EXPORT   void Rational (const Standard_Boolean aRational) ;
  
  //! Returns the value of the field rational.
  Standard_EXPORT   Standard_Boolean Rational()  const;
  
  //! Set the value of the field poles with <aPoles>.
  Standard_EXPORT   void Poles (const Handle(PColgp_HArray1OfPnt)& aPoles) ;
  
  //! Returns the value of the field poles.
  Standard_EXPORT   Handle(PColgp_HArray1OfPnt) Poles()  const;
  
  //! Set the value of the field weights.
  Standard_EXPORT   void Weights (const Handle(PColStd_HArray1OfReal)& aWeights) ;
  
  //! Returns the value of the field weights.
  Standard_EXPORT   Handle(PColStd_HArray1OfReal) Weights()  const;

PGeom_BezierCurve(const Storage_stCONSTclCOM& a) : PGeom_BoundedCurve(a)
{
  
}
    Standard_Boolean _CSFDB_GetPGeom_BezierCurverational() const { return rational; }
    void _CSFDB_SetPGeom_BezierCurverational(const Standard_Boolean p) { rational = p; }
    Handle(PColgp_HArray1OfPnt) _CSFDB_GetPGeom_BezierCurvepoles() const { return poles; }
    void _CSFDB_SetPGeom_BezierCurvepoles(const Handle(PColgp_HArray1OfPnt)& p) { poles = p; }
    Handle(PColStd_HArray1OfReal) _CSFDB_GetPGeom_BezierCurveweights() const { return weights; }
    void _CSFDB_SetPGeom_BezierCurveweights(const Handle(PColStd_HArray1OfReal)& p) { weights = p; }



  DEFINE_STANDARD_RTTI(PGeom_BezierCurve)

protected:




private: 


  Standard_Boolean rational;
  Handle(PColgp_HArray1OfPnt) poles;
  Handle(PColStd_HArray1OfReal) weights;


};







#endif // _PGeom_BezierCurve_HeaderFile
