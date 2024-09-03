
/* TorusShape3D+WireRenderDescriptor() */

void Assembly-CSharp.dll::RTG::TorusShape3D+WireRenderDescriptor::
     TorusShape3D_WireRenderDescriptor__ctor
               (TorusShape3D_WireRenderDescriptor *this,MethodInfo *method)

{
  (this->fields)._wireFlags = 2;
  (this->fields)._numTubeSlices = 0x1e;
  (this->fields)._numAxialSlices = 0x1e;
  return;
}


/* Void set_NumAxialSlices(Int32) */

void Assembly-CSharp.dll::RTG::TorusShape3D+WireRenderDescriptor::
     TorusShape3D_WireRenderDescriptor_set_NumAxialSlices
               (TorusShape3D_WireRenderDescriptor *this,int32_t value,MethodInfo *method)

{
  iVar1 = 2;
  if (1 < value) {
    iVar1 = value;
  }
  (this->fields)._numAxialSlices = iVar1;
  return;
}


/* Void set_NumTubeSlices(Int32) */

void Assembly-CSharp.dll::RTG::TorusShape3D+WireRenderDescriptor::
     TorusShape3D_WireRenderDescriptor_set_NumTubeSlices
               (TorusShape3D_WireRenderDescriptor *this,int32_t value,MethodInfo *method)

{
  iVar1 = 0;
  if (-1 < value) {
    iVar1 = value;
  }
  (this->fields)._numTubeSlices = iVar1;
  return;
}

