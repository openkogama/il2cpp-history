
/* IModelingConstraint <>m__0() */

IModelingConstraint *
Assembly-CSharp.dll::MVMovingPlatform+<Initialize>c__AnonStorey0::
MVMovingPlatform_Initialize_c_AnonStorey0___m__0
          (MVMovingPlatform_Initialize_c_AnonStorey0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._this;
  if (pMVar1 != (MVMovingPlatform *)0x0) {
    cubeModel = (pMVar1->fields)._._CubeModel_k__BackingField;
    maxCorner = (this->fields).max;
    minCorner = (this->fields).min;
    this_00 = (ModelingBoxCountConstraint *)func_?(TypeInfo__ModelingBoxCountConstraint);
    ModelingBoxCountConstraint::ModelingBoxCountConstraint__ctor
              (this_00,(MVCubeModelBase *)cubeModel,minCorner,maxCorner,1,(MethodInfo *)0x0);
    return (IModelingConstraint *)this_00;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pIVar3 = (IModelingConstraint *)(*pcVar2)();
  return pIVar3;
}

