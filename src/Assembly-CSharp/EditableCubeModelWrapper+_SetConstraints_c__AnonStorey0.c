
/* IModelingConstraint <>m__0() */

IModelingConstraint *
Assembly-CSharp.dll::EditableCubeModelWrapper+<SetConstraints>c__AnonStorey0::
EditableCubeModelWrapper_SetConstraints_c_AnonStorey0___m__0
          (EditableCubeModelWrapper_SetConstraints_c_AnonStorey0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pEVar1 = (this->fields)._this;
  if (pEVar1 != (EditableCubeModelWrapper *)0x0) {
    cubeModel = (pEVar1->fields).cubeModelBase;
    maxCorner = (this->fields).max;
    minCorner = (this->fields).min;
    minCubeCount = (this->fields).minCubeCount;
    this_00 = (ModelingBoxCountConstraint *)func_?(TypeInfo__ModelingBoxCountConstraint);
    ModelingBoxCountConstraint::ModelingBoxCountConstraint__ctor
              (this_00,(MVCubeModelBase *)cubeModel,minCorner,maxCorner,minCubeCount,
               (MethodInfo *)0x0);
    return (IModelingConstraint *)this_00;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pIVar3 = (IModelingConstraint *)(*pcVar2)();
  return pIVar3;
}

