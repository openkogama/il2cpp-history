
/* BoxShape3D+WireRenderDescriptor() */

void Assembly-CSharp.dll::RTG::BoxShape3D+WireRenderDescriptor::
     BoxShape3D_WireRenderDescriptor__ctor(BoxShape3D_WireRenderDescriptor *this,MethodInfo *method)

{
  (this->fields)._cornerLinePercentage = 0.2;
  return;
}


/* Void set_CornerLinePercentage(Single) */

void Assembly-CSharp.dll::RTG::BoxShape3D+WireRenderDescriptor::
     BoxShape3D_WireRenderDescriptor_set_CornerLinePercentage
               (BoxShape3D_WireRenderDescriptor *this,float value,MethodInfo *method)

{
  fVar1 = 0.0;
  if ((0.0 <= value) && (fVar1 = _UNK_?, value <= _UNK_?)) {
    (this->fields)._cornerLinePercentage = value;
    return;
  }
  (this->fields)._cornerLinePercentage = fVar1;
  return;
}

