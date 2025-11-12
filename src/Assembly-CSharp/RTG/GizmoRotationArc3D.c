
/* Void Render(GizmoRotationArc3DLookAndFeel) */

void Assembly-CSharp.dll::RTG::GizmoRotationArc3D::GizmoRotationArc3D_Render
               (GizmoRotationArc3D *this,GizmoRotationArc3DLookAndFeel *lookAndFeel,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__Singleton<RTG::GizmoSolidMaterial>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((lookAndFeel == (GizmoRotationArc3DLookAndFeel *)0x0) ||
     (pAVar1 = (this->fields)._arc, pAVar1 == (ArcShape3D *)0x0)) goto code_?;
  (pAVar1->fields)._forceShortestArc = (lookAndFeel->fields)._useShortestRotation;
  ArcShape3D::ArcShape3D_CalculateEndPoint(pAVar1,(MethodInfo *)0x0);
  (pAVar1->fields)._areBorderPointsDirty = 1;
  if (((lookAndFeel->fields)._fillFlags & 1) != 0) {
    if (*(int *)&(TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_00 = (GizmoSolidMaterial *)
              Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                        (MethodInfo__RTG__Singleton<RTG::GizmoSolidMaterial>__get_Get__);
    if (this_00 == (GizmoSolidMaterial *)0x0) goto code_?;
    GizmoSolidMaterial::GizmoSolidMaterial_ResetValuesToSensibleDefaults(this_00,(MethodInfo *)0x0);
    GizmoSolidMaterial::GizmoSolidMaterial_SetCullModeOff(this_00,(MethodInfo *)0x0);
    GizmoSolidMaterial::GizmoSolidMaterial_SetLit(this_00,0,(MethodInfo *)0x0);
    uVar2._0_4_ = (lookAndFeel->fields)._color.r;
    uVar2._4_4_ = (lookAndFeel->fields)._color.g;
    uVar3._0_4_ = (lookAndFeel->fields)._color.b;
    uVar3._4_4_ = (lookAndFeel->fields)._color.a;
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral__Color);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar4 = GizmoSolidMaterial::GizmoSolidMaterial_get_Material(this_00,(MethodInfo *)0x0);
    if (pMVar4 == (Material *)0x0) goto code_?;
    aCStack_5[0]._0_8_ = uVar2;
    aCStack_5[0]._8_8_ = uVar3;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
              (pMVar4,StringLiteral__Color,aCStack_5,(MethodInfo *)0x0);
    pMVar4 = GizmoSolidMaterial::GizmoSolidMaterial_get_Material(this_00,(MethodInfo *)0x0);
    if (pMVar4 == (Material *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass(pMVar4,0,(MethodInfo *)0x0);
    pAVar1 = (this->fields)._arc;
    if (pAVar1 == (ArcShape3D *)0x0) goto code_?;
    (*(pAVar1->klass->vtable).RenderSolid.methodPtr)();
  }
  if (*(int *)&(TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_01 = (GizmoLineMaterial *)
            Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                      (MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
  if (this_01 != (GizmoLineMaterial *)0x0) {
    GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults(this_01,(MethodInfo *)0x0);
    uVar6._0_4_ = (lookAndFeel->fields)._borderColor.r;
    uVar6._4_4_ = (lookAndFeel->fields)._borderColor.g;
    uVar7._0_4_ = (lookAndFeel->fields)._borderColor.b;
    uVar7._4_4_ = (lookAndFeel->fields)._borderColor.a;
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral__Color);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar4 = GizmoLineMaterial::GizmoLineMaterial_get_Material(this_01,(MethodInfo *)0x0);
    if (pMVar4 != (Material *)0x0) {
      aCStack_5[0]._0_8_ = uVar6;
      aCStack_5[0]._8_8_ = uVar7;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                (pMVar4,StringLiteral__Color,aCStack_5,(MethodInfo *)0x0);
      pMVar4 = GizmoLineMaterial::GizmoLineMaterial_get_Material(this_01,(MethodInfo *)0x0);
      if (pMVar4 != (Material *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                  (pMVar4,0,(MethodInfo *)0x0);
        pAVar1 = (this->fields)._arc;
        if (pAVar1 != (ArcShape3D *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pAVar1->klass->vtable).RenderWire.methodPtr)
                    (pAVar1,(pAVar1->klass->vtable).RenderWire.method);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetArcData(Vector3, Vector3, Vector3, Single) */

void Assembly-CSharp.dll::RTG::GizmoRotationArc3D::GizmoRotationArc3D_SetArcData
               (GizmoRotationArc3D *this,Vector3 *rotationAxis,Vector3 *arcOrigin,Vector3 *arcStart,
               float radius,MethodInfo *method)

{
  uStack_1._0_4_ = rotationAxis->x;
  uStack_1._4_4_ = rotationAxis->y;
  fStack_2 = rotationAxis->z;
  fVar3 = (float)FUN_?(&uStack_1);
  if (_UNK_? < fVar3) {
    uVar4 = rotationAxis->x;
    uVar5 = rotationAxis->y;
    fStack_6 = rotationAxis->z / fVar3;
    uStack_1 = CONCAT44((float)uVar5 / fVar3,(float)uVar4 / fVar3);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_1._0_4_ = (pVVar7->zeroVector).x;
    uStack_1._4_4_ = (pVVar7->zeroVector).y;
    fStack_6 = (pVVar7->zeroVector).z;
  }
  uVar8 = arcOrigin->x;
  uVar9 = arcOrigin->y;
  fVar3 = (float)uStack_1;
  fVar10 = uStack_1._4_4_;
  this_00 = (this->fields)._arc;
  uStack_11 = uStack_1;
  fStack_12 = (float)((uint)(uStack_1._4_4_ * (float)uVar9 + (float)uStack_1 * (float)uVar8 +
                            fStack_6 * arcOrigin->z) ^ _UNK_?);
  if (this_00 != (ArcShape3D *)0x0) {
    (this_00->fields)._plane.m_Normal.x = (float)uStack_1;
    (this_00->fields)._plane.m_Normal.y = uStack_1._4_4_;
    *(ulonglong *)&(this_00->fields)._plane.m_Normal.z = CONCAT44(fStack_12,fStack_6);
    fVar13 = fVar10 * (float)uVar9 + fVar3 * (float)uVar8 + fStack_6 * arcOrigin->z + fStack_12;
    fVar14 = arcOrigin->z;
    (this_00->fields)._origin.x = (float)uVar8 - fVar3 * fVar13;
    (this_00->fields)._origin.y = (float)uVar9 - fVar10 * fVar13;
    (this_00->fields)._origin.z = fVar14 - fStack_6 * fVar13;
    uVar15 = arcStart->x;
    uVar16 = arcStart->y;
    fVar13 = fVar10 * (float)uVar16 + fVar3 * (float)uVar15 + fStack_6 * arcStart->z + fStack_12;
    fVar14 = arcStart->z;
    (this_00->fields)._startPoint.x = (float)uVar15 - fVar13 * fVar3;
    (this_00->fields)._startPoint.y = (float)uVar16 - fVar13 * fVar10;
    (this_00->fields)._startPoint.z = fVar14 - fVar13 * fStack_6;
    uStack_17._0_4_ = (this_00->fields)._origin.x;
    uStack_17._4_4_ = (this_00->fields)._origin.y;
    fVar3 = (this_00->fields)._origin.z;
    fVar10 = (this_00->fields)._startPoint.z - (this_00->fields)._origin.z;
    (this_00->fields)._radius = radius;
    uVar18 = (this_00->fields)._startPoint.x;
    uVar19 = (this_00->fields)._startPoint.y;
    fVar20 = (float)uVar18 - (float)uStack_17;
    fVar13 = (float)uVar19 - uStack_17._4_4_;
    uStack_11 = CONCAT44(fVar13,fVar20);
    fStack_6 = fVar10;
    fVar14 = (float)FUN_?(&uStack_11);
    if (_UNK_? < fVar14) {
      fVar10 = fVar10 / fVar14;
      uStack_11 = CONCAT44(fVar13 / fVar14,fVar20 / fVar14);
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_11._0_4_ = (pVVar7->zeroVector).x;
      uStack_11._4_4_ = (pVVar7->zeroVector).y;
      fVar10 = (pVVar7->zeroVector).z;
    }
    fVar14 = (this_00->fields)._radius;
    (this_00->fields)._startPoint.x = fVar14 * (float)uStack_11 + (float)uStack_17;
    (this_00->fields)._startPoint.y = fVar14 * uStack_11._4_4_ + uStack_17._4_4_;
    (this_00->fields)._startPoint.z = fVar14 * fVar10 + fVar3;
    ArcShape3D::ArcShape3D_CalculateEndPoint(this_00,(MethodInfo *)0x0);
    (this_00->fields)._areBorderPointsDirty = 1;
    return;
  }
  FUN_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* GizmoRotationArc3D() */

void Assembly-CSharp.dll::RTG::GizmoRotationArc3D::GizmoRotationArc3D__ctor
               (GizmoRotationArc3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__ArcShape3D);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (ArcShape3D *)FUN_?(TypeInfo__RTG__ArcShape3D);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__ArcShape3D__WireRenderDescriptor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar2 = (ArcShape3D_WireRenderDescriptor *)
           FUN_?(TypeInfo__RTG__ArcShape3D__WireRenderDescriptor);
  (pAVar2->fields)._wireFlags = 3;
  (pAVar1->fields)._wireRenderDesc = pAVar2;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&pAVar1->fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  iVar8 = iRam_?;
  (pAVar1->fields)._numBorderPoints = 100;
  (pAVar1->fields)._areBorderPointsDirty = 1;
  (this->fields)._arc = pAVar1;
  if (iVar8 != 0) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  return;
}


/* Single get_Radius() */

float Assembly-CSharp.dll::RTG::GizmoRotationArc3D::GizmoRotationArc3D_get_Radius
                (GizmoRotationArc3D *this,MethodInfo *method)

{
  pAVar1 = (this->fields)._arc;
  if (pAVar1 != (ArcShape3D *)0x0) {
    return (pAVar1->fields)._radius;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_RotationAngle() */

float Assembly-CSharp.dll::RTG::GizmoRotationArc3D::GizmoRotationArc3D_get_RotationAngle
                (GizmoRotationArc3D *this,MethodInfo *method)

{
  pAVar1 = (this->fields)._arc;
  if (pAVar1 != (ArcShape3D *)0x0) {
    return (pAVar1->fields)._degreeAngleFromStart;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Void set_Radius(Single) */

void Assembly-CSharp.dll::RTG::GizmoRotationArc3D::GizmoRotationArc3D_set_Radius
               (GizmoRotationArc3D *this,float value,MethodInfo *method)

{
  this_00 = (this->fields)._arc;
  if (this_00 != (ArcShape3D *)0x0) {
    uStack_1._0_4_ = (this_00->fields)._origin.x;
    uStack_1._4_4_ = (this_00->fields)._origin.y;
    fVar2 = (this_00->fields)._origin.z;
    fVar3 = (this_00->fields)._startPoint.z - (this_00->fields)._origin.z;
    (this_00->fields)._radius = value;
    uVar4 = (this_00->fields)._startPoint.x;
    uVar5 = (this_00->fields)._startPoint.y;
    fVar6 = (float)uVar4 - (float)uStack_1;
    fVar7 = (float)uVar5 - uStack_1._4_4_;
    uStack_8 = CONCAT44(fVar7,fVar6);
    fStack_9 = fVar3;
    fVar10 = (float)FUN_?(&uStack_8,in_RDX,0);
    if (_UNK_? < fVar10) {
      fVar3 = fVar3 / fVar10;
      uStack_8 = CONCAT44(fVar7 / fVar10,fVar6 / fVar10);
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_8._0_4_ = (pVVar11->zeroVector).x;
      uStack_8._4_4_ = (pVVar11->zeroVector).y;
      fVar3 = (pVVar11->zeroVector).z;
    }
    fVar10 = (this_00->fields)._radius;
    (this_00->fields)._startPoint.x = fVar10 * (float)uStack_8 + (float)uStack_1;
    (this_00->fields)._startPoint.y = fVar10 * uStack_8._4_4_ + uStack_1._4_4_;
    (this_00->fields)._startPoint.z = fVar10 * fVar3 + fVar2;
    ArcShape3D::ArcShape3D_CalculateEndPoint(this_00,(MethodInfo *)0x0);
    (this_00->fields)._areBorderPointsDirty = 1;
    return;
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void set_RotationAngle(Single) */

void Assembly-CSharp.dll::RTG::GizmoRotationArc3D::GizmoRotationArc3D_set_RotationAngle
               (GizmoRotationArc3D *this,float value,MethodInfo *method)

{
  this_00 = (this->fields)._arc;
  if (this_00 != (ArcShape3D *)0x0) {
    fVar1 = (float)FUN_?(value,_UNK_?);
    (this_00->fields)._degreeAngleFromStart = fVar1;
    ArcShape3D::ArcShape3D_CalculateEndPoint(this_00,(MethodInfo *)0x0);
    (this_00->fields)._areBorderPointsDirty = 1;
    return;
  }
  FUN_?(value);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

