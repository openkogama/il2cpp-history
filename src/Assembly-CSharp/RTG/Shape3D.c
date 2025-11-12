
/* Boolean Raycast(Ray) */

bool Assembly-CSharp.dll::RTG::Shape3D::Shape3D_Raycast(Shape3D *this,Ray *ray,MethodInfo *method)

{
  fStack_1 = (ray->m_Origin).x;
  fStack_2 = (ray->m_Origin).y;
  fStack_3 = (ray->m_Origin).z;
  fStack_4 = (ray->m_Direction).x;
  auStackX_8[0] = 0;
  uStack_5._0_4_ = (ray->m_Direction).y;
  uStack_5._4_4_ = (ray->m_Direction).z;
  bVar6 = (*(this->klass->vtable).__unknown_2.methodPtr)
                    (fStack_1,&fStack_1,auStackX_8,(this->klass->vtable).__unknown_2.method);
  return bVar6;
}


/* Boolean RaycastWire(Ray) */

bool Assembly-CSharp.dll::RTG::Shape3D::Shape3D_RaycastWire
               (Shape3D *this,Ray *ray,MethodInfo *method)

{
  fStack_1 = (ray->m_Origin).x;
  fStack_2 = (ray->m_Origin).y;
  fStack_3 = (ray->m_Origin).z;
  fStack_4 = (ray->m_Direction).x;
  auStackX_8[0] = 0;
  uStack_5._0_4_ = (ray->m_Direction).y;
  uStack_5._4_4_ = (ray->m_Direction).z;
  bVar6 = (*(this->klass->vtable).RaycastWire.methodPtr)
                    (fStack_1,&fStack_1,auStackX_8,(this->klass->vtable).RaycastWire.method);
  return bVar6;
}


/* Boolean RaycastWire(Ray, Single ByRef) */

bool Assembly-CSharp.dll::RTG::Shape3D::Shape3D_RaycastWire_1
               (Shape3D *this,Ray *ray,float *t,MethodInfo *method)

{
  fStack_1 = (ray->m_Origin).x;
  fStack_2 = (ray->m_Origin).y;
  fStack_3 = (ray->m_Origin).z;
  fStack_4 = (ray->m_Direction).x;
  uStack_5._0_4_ = (ray->m_Direction).y;
  uStack_5._4_4_ = (ray->m_Direction).z;
  bVar6 = (*(this->klass->vtable).__unknown_2.methodPtr)
                    (fStack_1,&fStack_1,t,(this->klass->vtable).__unknown_2.method);
  return bVar6;
}

