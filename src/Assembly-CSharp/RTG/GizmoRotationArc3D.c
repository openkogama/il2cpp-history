
/* Void Render(GizmoRotationArc3DLookAndFeel) */

void Assembly-CSharp.dll::RTG::GizmoRotationArc3D::GizmoRotationArc3D_Render
               (GizmoRotationArc3D *this,GizmoRotationArc3DLookAndFeel *lookAndFeel,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
    func_?(&MethodInfo__RTG__Singleton<RTG::GizmoSolidMaterial>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
    func_?(&TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>);
    cRam_? = '\x01';
  }
  if (lookAndFeel != (GizmoRotationArc3DLookAndFeel *)0x0) {
    pAVar1 = (this->fields)._arc;
    if (pAVar1 != (ArcShape3D *)0x0) {
      ArcShape3D::ArcShape3D_set_ForceShortestArc
                (pAVar1,(lookAndFeel->fields)._useShortestRotation,(MethodInfo *)0x0);
      if (((lookAndFeel->fields)._fillFlags & 1) != 0) {
        if ((TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>->_1).cctor_finished_or_no_cctor == 0)
        {
          func_?(TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>);
        }
        this_00 = (GizmoSolidMaterial *)
                  Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                            (MethodInfo__RTG__Singleton<RTG::GizmoSolidMaterial>__get_Get__);
        if (this_00 == (GizmoSolidMaterial *)0x0) goto code_?;
        GizmoSolidMaterial::GizmoSolidMaterial_ResetValuesToSensibleDefaults
                  (this_00,(MethodInfo *)0x0);
        GizmoSolidMaterial::GizmoSolidMaterial_SetCullModeOff(this_00,(MethodInfo *)0x0);
        GizmoSolidMaterial::GizmoSolidMaterial_SetLit(this_00,0,(MethodInfo *)0x0);
        GizmoSolidMaterial::GizmoSolidMaterial_SetColor
                  (this_00,(lookAndFeel->fields)._color,(MethodInfo *)0x0);
        GizmoSolidMaterial::GizmoSolidMaterial_SetPass(this_00,0,(MethodInfo *)0x0);
        pAVar1 = (this->fields)._arc;
        if (pAVar1 == (ArcShape3D *)0x0) goto code_?;
        (*(code *)(pAVar1->klass->vtable).RenderSolid.method)
                  (pAVar1,(pAVar1->klass->vtable).RenderWire.methodPtr);
      }
      if ((TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
      }
      this_01 = (GizmoLineMaterial *)
                Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                          (MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
      if (this_01 != (GizmoLineMaterial *)0x0) {
        GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults
                  (this_01,(MethodInfo *)0x0);
        GizmoLineMaterial::GizmoLineMaterial_SetColor
                  (this_01,(lookAndFeel->fields)._borderColor,(MethodInfo *)0x0);
        GizmoLineMaterial::GizmoLineMaterial_SetPass(this_01,0,(MethodInfo *)0x0);
        pAVar1 = (this->fields)._arc;
        if (pAVar1 != (ArcShape3D *)0x0) {
          (*(code *)(pAVar1->klass->vtable).RenderWire.method)
                    (pAVar1,(pAVar1->klass->vtable).Raycast.methodPtr);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetArcData(Vector3, Vector3, Vector3, Single) */

void Assembly-CSharp.dll::RTG::GizmoRotationArc3D::GizmoRotationArc3D_SetArcData
               (GizmoRotationArc3D *this,Vector3 rotationAxis,Vector3 arcOrigin,Vector3 arcStart,
               float radius,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  dVar1 = (double)(rotationAxis.y * rotationAxis.y + rotationAxis.x * rotationAxis.x +
                  rotationAxis.z * rotationAxis.z);
  if (dVar1 < 0.0) {
    func_?();
  }
  else {
    dVar1 = SQRT(dVar1);
  }
  fVar2 = (float)dVar1;
  if (_UNK_? < fVar2) {
    fVar3 = rotationAxis.z / fVar2;
    uVar4 = CONCAT44(rotationAxis.y / fVar2,rotationAxis.x / fVar2);
  }
  else {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar4._0_4_ = (pVVar5->zeroVector).x;
    uVar4._4_4_ = (pVVar5->zeroVector).y;
    fVar3 = (pVVar5->zeroVector).z;
  }
  fStack_6 = (float)uVar4;
  fStack_7 = (float)((ulonglong)uVar4 >> 0x20);
  this_00 = (this->fields)._arc;
  if (this_00 != (ArcShape3D *)0x0) {
    plane.m_Normal.z = fVar3;
    plane.m_Normal.x = (float)(int)uVar4;
    plane.m_Normal.y = (float)(int)((ulonglong)uVar4 >> 0x20);
    plane.m_Distance =
         (float)((uint)(arcOrigin.x * fStack_6 + arcOrigin.y * fStack_7 + arcOrigin.z * fVar3) ^
                __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
    ArcShape3D::ArcShape3D_SetArcData(this_00,plane,arcOrigin,arcStart,radius,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* GizmoRotationArc3D() */

void Assembly-CSharp.dll::RTG::GizmoRotationArc3D::GizmoRotationArc3D__ctor
               (GizmoRotationArc3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__ArcShape3D);
    cRam_? = '\x01';
  }
  this_00 = (ArcShape3D *)func_?(TypeInfo__RTG__ArcShape3D);
  ArcShape3D::ArcShape3D__ctor(this_00,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&this->fields;
  (this->fields)._arc = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* Single get_Radius() */

float Assembly-CSharp.dll::RTG::GizmoRotationArc3D::GizmoRotationArc3D_get_Radius
                (GizmoRotationArc3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pAVar2 = (this->fields)._arc;
  if (pAVar2 != (ArcShape3D *)0x0) {
    return (pAVar2->fields)._radius;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Single get_RotationAngle() */

float Assembly-CSharp.dll::RTG::GizmoRotationArc3D::GizmoRotationArc3D_get_RotationAngle
                (GizmoRotationArc3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pAVar2 = (this->fields)._arc;
  if (pAVar2 != (ArcShape3D *)0x0) {
    return (pAVar2->fields)._degreeAngleFromStart;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Void set_Radius(Single) */

void Assembly-CSharp.dll::RTG::GizmoRotationArc3D::GizmoRotationArc3D_set_Radius
               (GizmoRotationArc3D *this,float value,MethodInfo *method)

{
  this_00 = (this->fields)._arc;
  if (this_00 != (ArcShape3D *)0x0) {
    ArcShape3D::ArcShape3D_set_Radius(this_00,value,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_RotationAngle(Single) */

void Assembly-CSharp.dll::RTG::GizmoRotationArc3D::GizmoRotationArc3D_set_RotationAngle
               (GizmoRotationArc3D *this,float value,MethodInfo *method)

{
  this_00 = (this->fields)._arc;
  if (this_00 != (ArcShape3D *)0x0) {
    ArcShape3D::ArcShape3D_set_DegreeAngleFromStart(this_00,value,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

