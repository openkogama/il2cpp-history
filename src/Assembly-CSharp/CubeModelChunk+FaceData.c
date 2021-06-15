
/* CubeModelChunk+FaceData() */

void Assembly-CSharp.dll::CubeModelChunk+FaceData::CubeModelChunk_FaceData__ctor
               (CubeModelChunk_FaceData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pVVar1 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,4);
  (this->fields).faceVertices = pVVar1;
  method_00 = TypeInfo__UnityEngine__Color;
  pCVar2 = (Color__Array *)func_?(TypeInfo__UnityEngine__Color,4);
  (this->fields).colors = pCVar2;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  return;
}

