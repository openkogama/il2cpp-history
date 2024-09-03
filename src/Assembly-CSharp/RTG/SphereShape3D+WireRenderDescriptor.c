
/* SphereShape3D+WireRenderDescriptor() */

void Assembly-CSharp.dll::RTG::SphereShape3D+WireRenderDescriptor::
     SphereShape3D_WireRenderDescriptor__ctor
               (SphereShape3D_WireRenderDescriptor *this,MethodInfo *method)

{
  (this->fields)._numDetailAxialRings = 0x14;
  (this->fields)._numDetailSliceRings = 0x14;
  return;
}


/* Void set_NumDetailAxialRings(Int32) */

void Assembly-CSharp.dll::RTG::SphereShape3D+WireRenderDescriptor::
     SphereShape3D_WireRenderDescriptor_set_NumDetailAxialRings
               (SphereShape3D_WireRenderDescriptor *this,int32_t value,MethodInfo *method)

{
  iVar1 = 2;
  if (1 < value) {
    iVar1 = value;
  }
  (this->fields)._numDetailAxialRings = iVar1;
  return;
}


/* Void set_NumDetailSliceRings(Int32) */

void Assembly-CSharp.dll::RTG::SphereShape3D+WireRenderDescriptor::
     SphereShape3D_WireRenderDescriptor_set_NumDetailSliceRings
               (SphereShape3D_WireRenderDescriptor *this,int32_t value,MethodInfo *method)

{
  iVar1 = 0;
  if (-1 < value) {
    iVar1 = value;
  }
  (this->fields)._numDetailSliceRings = iVar1;
  return;
}

