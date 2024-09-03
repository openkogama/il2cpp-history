
/* Boolean Raycast(Ray) */

bool Assembly-CSharp.dll::RTG::Shape3D::Shape3D_Raycast(Shape3D *this,Ray ray,MethodInfo *method)

{
  uStack_1 = 0;
  bVar2 = (*(code *)(this->klass->vtable).__unknown_2.method)
                    (this,ray.m_Origin.x,ray.m_Origin.y,ray.m_Origin.z,ray.m_Direction.x,
                     ray.m_Direction._4_8_,&uStack_1,(this->klass->vtable).__unknown_3.methodPtr);
  return bVar2;
}


/* Boolean RaycastWire(Ray) */

bool Assembly-CSharp.dll::RTG::Shape3D::Shape3D_RaycastWire
               (Shape3D *this,Ray ray,MethodInfo *method)

{
  uStack_1 = 0;
  bVar2 = (*(code *)(this->klass->vtable).RaycastWire.method)
                    (this,ray.m_Origin.x,ray.m_Origin.y,ray.m_Origin.z,ray.m_Direction.x,
                     ray.m_Direction._4_8_,&uStack_1,(this->klass->vtable).__unknown.methodPtr);
  return bVar2;
}


/* Boolean RaycastWire(Ray, Single ByRef) */

bool Assembly-CSharp.dll::RTG::Shape3D::Shape3D_RaycastWire_1
               (Shape3D *this,Ray ray,float *t,MethodInfo *method)

{
  bVar1 = (*(code *)(this->klass->vtable).__unknown_2.method)
                    (this,ray.m_Origin.x,ray.m_Origin.y,ray.m_Origin.z,ray.m_Direction.x,
                     ray.m_Direction._4_8_,t,(this->klass->vtable).__unknown_3.methodPtr);
  return bVar1;
}

