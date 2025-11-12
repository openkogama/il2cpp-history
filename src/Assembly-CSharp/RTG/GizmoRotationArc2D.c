
/* Void Render(GizmoRotationArc2DLookAndFeel, Camera) */

void Assembly-CSharp.dll::RTG::GizmoRotationArc2D::GizmoRotationArc2D_Render
               (GizmoRotationArc2D *this,GizmoRotationArc2DLookAndFeel *lookAndFeel,Camera *camera,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
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
  if (((this->fields)._type != 0) && ((this->fields)._projectionPoly != (PolygonShape2D *)0x0)) {
    if ((this->fields)._type != 1) {
      return;
    }
    pAVar1 = (this->fields)._arc;
    if (pAVar1 != (ArcShape2D *)0x0) {
      if (lookAndFeel != (GizmoRotationArc2DLookAndFeel *)0x0) {
        VVar2.y = (pAVar1->fields)._startPoint.y;
        VVar2.x = (pAVar1->fields)._startPoint.x;
        arcOrigin.y = (pAVar1->fields)._origin.y;
        arcOrigin.x = (pAVar1->fields)._origin.x;
        pLVar3 = PrimitiveFactory::PrimitiveFactory_Generate2DArcBorderPoints
                            (arcOrigin,VVar2,(pAVar1->fields)._degreeAngleFromStart,
                             (lookAndFeel->fields)._useShortestRotation,
                             (this->fields)._numProjectedPoints,(MethodInfo *)0x0);
        pAVar1 = (this->fields)._arc;
        if (pAVar1 != (ArcShape2D *)0x0) {
          pPVar4 = (this->fields)._projectionPoly;
          VVar2 = (pAVar1->fields)._origin;
          if (pPVar4 != (PolygonShape2D *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector2>_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pLVar5 = (pPVar4->fields)._cwPolyPoints;
            this_00 = (List_1_UnityEngine_Vector2_ *)
                      FUN_?(
                                   TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>
                                   );
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2___ctor_1
                      (this_00,(IEnumerable_1_UnityEngine_Vector2_ *)pLVar5,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector2>_
                      );
            pLVar3 = PrimitiveFactory::PrimitiveFactory_ProjectArcPointsOnPoly2DBorder
                                (VVar2,pLVar3,this_00,(MethodInfo *)0x0);
            if (((lookAndFeel->fields)._fillFlags & 1) != 0) {
              if (*(int *)&(TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>->_1).field_0x1c == 0)
              {
                FUN_?();
              }
              pGVar6 = (GizmoSolidMaterial *)
                        Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                                  (MethodInfo__RTG__Singleton<RTG::GizmoSolidMaterial>__get_Get__);
              if (pGVar6 == (GizmoSolidMaterial *)0x0) goto code_?;
              GizmoSolidMaterial::GizmoSolidMaterial_ResetValuesToSensibleDefaults
                        (pGVar6,(MethodInfo *)0x0);
              GizmoSolidMaterial::GizmoSolidMaterial_SetCullModeOff(pGVar6,(MethodInfo *)0x0);
              GizmoSolidMaterial::GizmoSolidMaterial_SetLit(pGVar6,0,(MethodInfo *)0x0);
              uVar7._0_4_ = (lookAndFeel->fields)._color.r;
              uVar7._4_4_ = (lookAndFeel->fields)._color.g;
              uVar8._0_4_ = (lookAndFeel->fields)._color.b;
              uVar8._4_4_ = (lookAndFeel->fields)._color.a;
              if (cRam_? == '\0') {
                FUN_?(&StringLiteral__Color);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar9 = GizmoSolidMaterial::GizmoSolidMaterial_get_Material
                                  (pGVar6,(MethodInfo *)0x0);
              if (pMVar9 == (Material *)0x0) goto code_?;
              aCStack_10[0]._0_8_ = uVar7;
              aCStack_10[0]._8_8_ = uVar8;
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                        (pMVar9,StringLiteral__Color,aCStack_10,(MethodInfo *)0x0);
              pMVar9 = GizmoSolidMaterial::GizmoSolidMaterial_get_Material
                                  (pGVar6,(MethodInfo *)0x0);
              if (pMVar9 == (Material *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                        (pMVar9,0,(MethodInfo *)0x0);
              pAVar1 = (this->fields)._arc;
              if (pAVar1 == (ArcShape2D *)0x0) goto code_?;
              GLRenderer::GLRenderer_DrawTriangleFan2D_1
                        ((pAVar1->fields)._origin,pLVar3,camera,(MethodInfo *)0x0);
            }
            if ((lookAndFeel->fields)._fillFlags == 0) {
              return;
            }
            if (*(int *)&(TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).field_0x1c == 0) {
              FUN_?();
            }
            pGVar11 = (GizmoLineMaterial *)
                      Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                                (MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
            if (pGVar11 != (GizmoLineMaterial *)0x0) {
              GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults
                        (pGVar11,(MethodInfo *)0x0);
              uVar12._0_4_ = (lookAndFeel->fields)._borderColor.r;
              uVar12._4_4_ = (lookAndFeel->fields)._borderColor.g;
              uVar13._0_4_ = (lookAndFeel->fields)._borderColor.b;
              uVar13._4_4_ = (lookAndFeel->fields)._borderColor.a;
              if (cRam_? == '\0') {
                FUN_?(&StringLiteral__Color);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar9 = GizmoLineMaterial::GizmoLineMaterial_get_Material(pGVar11,(MethodInfo *)0x0)
              ;
              if (pMVar9 != (Material *)0x0) {
                aCStack_10[0]._0_8_ = uVar12;
                aCStack_10[0]._8_8_ = uVar13;
                UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                          (pMVar9,StringLiteral__Color,aCStack_10,(MethodInfo *)0x0);
                pMVar9 = GizmoLineMaterial::GizmoLineMaterial_get_Material
                                    (pGVar11,(MethodInfo *)0x0);
                if (pMVar9 != (Material *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                            (pMVar9,0,(MethodInfo *)0x0);
                  if (((lookAndFeel->fields)._fillFlags & 4) != 0) {
                    GLRenderer::GLRenderer_DrawLines2D(pLVar3,camera,(MethodInfo *)0x0);
                  }
                  if (((lookAndFeel->fields)._fillFlags & 2) == 0) {
                    return;
                  }
                  pLVar5 = (List_1_UnityEngine_Vector2_ *)
                            FUN_?(
                                         TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>
                                         );
                  FUN_?(pLVar5,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__
                               );
                  pAVar1 = (this->fields)._arc;
                  if (((pAVar1 != (ArcShape2D *)0x0) &&
                      (pLVar5 != (List_1_UnityEngine_Vector2_ *)0x0)) &&
                     (FUN_?(pLVar5,CONCAT44((pAVar1->fields)._origin.y,
                                                     (pAVar1->fields)._origin.x),
                                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                                   ), pLVar3 != (List_1_UnityEngine_Vector2_ *)0x0)) {
                    uVar14 = FUN_?(pLVar3,0);
                    FUN_?(pLVar5,uVar14,
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                                 );
                    pAVar1 = (this->fields)._arc;
                    if (pAVar1 != (ArcShape2D *)0x0) {
                      FUN_?(pLVar5,(pAVar1->fields)._origin,
                                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                                   );
                      uVar14 = FUN_?(pLVar3,(pLVar3->fields)._size + -1);
                      FUN_?(pLVar5,uVar14);
                      GLRenderer::GLRenderer_DrawLines2D(pLVar5,camera,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto code_?;
  }
  if ((lookAndFeel == (GizmoRotationArc2DLookAndFeel *)0x0) ||
     (pAVar1 = (this->fields)._arc, pAVar1 == (ArcShape2D *)0x0)) goto code_?;
  (pAVar1->fields)._forceShortestArc = (lookAndFeel->fields)._useShortestRotation;
  ArcShape2D::ArcShape2D_CalculateEndPoint(pAVar1,(MethodInfo *)0x0);
  (pAVar1->fields)._areBorderPointsDirty = 1;
  if (((lookAndFeel->fields)._fillFlags & 1) != 0) {
    if (*(int *)&(TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>->_1).field_0x1c == 0) {
      FUN_?();
    }
    pGVar6 = (GizmoSolidMaterial *)
              Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                        (MethodInfo__RTG__Singleton<RTG::GizmoSolidMaterial>__get_Get__);
    if (pGVar6 == (GizmoSolidMaterial *)0x0) goto code_?;
    GizmoSolidMaterial::GizmoSolidMaterial_ResetValuesToSensibleDefaults(pGVar6,(MethodInfo *)0x0);
    GizmoSolidMaterial::GizmoSolidMaterial_SetCullModeOff(pGVar6,(MethodInfo *)0x0);
    GizmoSolidMaterial::GizmoSolidMaterial_SetLit(pGVar6,0,(MethodInfo *)0x0);
    uVar14._0_4_ = (lookAndFeel->fields)._color.r;
    uVar14._4_4_ = (lookAndFeel->fields)._color.g;
    uVar15._0_4_ = (lookAndFeel->fields)._color.b;
    uVar15._4_4_ = (lookAndFeel->fields)._color.a;
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral__Color);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar9 = GizmoSolidMaterial::GizmoSolidMaterial_get_Material(pGVar6,(MethodInfo *)0x0);
    if (pMVar9 == (Material *)0x0) goto code_?;
    aCStack_10[0]._0_8_ = uVar14;
    aCStack_10[0]._8_8_ = uVar15;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
              (pMVar9,StringLiteral__Color,aCStack_10,(MethodInfo *)0x0);
    pMVar9 = GizmoSolidMaterial::GizmoSolidMaterial_get_Material(pGVar6,(MethodInfo *)0x0);
    if (pMVar9 == (Material *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass(pMVar9,0,(MethodInfo *)0x0)
    ;
    pAVar1 = (this->fields)._arc;
    if (pAVar1 == (ArcShape2D *)0x0) goto code_?;
    (*(pAVar1->klass->vtable).RenderArea.methodPtr)
              (pAVar1,camera,(pAVar1->klass->vtable).RenderArea.method);
  }
  if (*(int *)&(TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).field_0x1c == 0) {
    FUN_?();
  }
  pGVar11 = (GizmoLineMaterial *)
            Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                      (MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
  if (pGVar11 != (GizmoLineMaterial *)0x0) {
    GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults(pGVar11,(MethodInfo *)0x0);
    uVar16._0_4_ = (lookAndFeel->fields)._borderColor.r;
    uVar16._4_4_ = (lookAndFeel->fields)._borderColor.g;
    uVar17._0_4_ = (lookAndFeel->fields)._borderColor.b;
    uVar17._4_4_ = (lookAndFeel->fields)._borderColor.a;
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral__Color);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar9 = GizmoLineMaterial::GizmoLineMaterial_get_Material(pGVar11,(MethodInfo *)0x0);
    if (pMVar9 != (Material *)0x0) {
      aCStack_10[0]._0_8_ = uVar16;
      aCStack_10[0]._8_8_ = uVar17;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                (pMVar9,StringLiteral__Color,aCStack_10,(MethodInfo *)0x0);
      pMVar9 = GizmoLineMaterial::GizmoLineMaterial_get_Material(pGVar11,(MethodInfo *)0x0);
      if (pMVar9 != (Material *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                  (pMVar9,0,(MethodInfo *)0x0);
        pAVar1 = (this->fields)._arc;
        if (pAVar1 != (ArcShape2D *)0x0) {
          (*(pAVar1->klass->vtable).RenderBorder.methodPtr)
                    (pAVar1,camera,(pAVar1->klass->vtable).RenderBorder.method);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void SetArcData(Vector2, Vector2, Single) */

void Assembly-CSharp.dll::RTG::GizmoRotationArc2D::GizmoRotationArc2D_SetArcData
               (GizmoRotationArc2D *this,Vector2 arcOrigin,Vector2 arcStart,float radius,
               MethodInfo *method)

{
  pAVar1 = (this->fields)._arc;
  aVStackX_8[0] = arcOrigin;
  VStack_2 = arcStart;
  if (pAVar1 != (ArcShape2D *)0x0) {
    uStack_3 = CONCAT44((pAVar1->fields)._startPoint.y - (pAVar1->fields)._origin.y,
                         (pAVar1->fields)._startPoint.x - (pAVar1->fields)._origin.x);
    uVar4 = FUN_?(&uStack_3);
    fVar5 = (pAVar1->fields)._radius;
    (pAVar1->fields)._origin.x = aVStackX_8[0].x;
    (pAVar1->fields)._origin.y = aVStackX_8[0].y;
    uStack_3._0_4_ = (float)uVar4;
    uStack_3._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
    (pAVar1->fields)._startPoint.x = fVar5 * (float)uStack_3 + aVStackX_8[0].x;
    (pAVar1->fields)._startPoint.y = fVar5 * uStack_3._4_4_ + aVStackX_8[0].y;
    uStack_3 = uVar4;
    ArcShape2D::ArcShape2D_CalculateEndPoint(pAVar1,(MethodInfo *)0x0);
    (pAVar1->fields)._areBorderPointsDirty = 1;
    pAVar1 = (this->fields)._arc;
    if (pAVar1 != (ArcShape2D *)0x0) {
      (pAVar1->fields)._radius = radius;
      fVar5 = (pAVar1->fields)._origin.x;
      fVar6 = (pAVar1->fields)._origin.y;
      (pAVar1->fields)._startPoint.x = VStack_2.x;
      (pAVar1->fields)._startPoint.y = VStack_2.y;
      aVStackX_8[0].y = VStack_2.y - fVar6;
      aVStackX_8[0].x = VStack_2.x - fVar5;
      aVStackX_8[0] = (Vector2)FUN_?(aVStackX_8);
      fVar7 = (pAVar1->fields)._radius;
      (pAVar1->fields)._startPoint.x = fVar7 * aVStackX_8[0].x + fVar5;
      (pAVar1->fields)._startPoint.y = fVar7 * aVStackX_8[0].y + fVar6;
      ArcShape2D::ArcShape2D_CalculateEndPoint(pAVar1,(MethodInfo *)0x0);
      (pAVar1->fields)._areBorderPointsDirty = 1;
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* GizmoRotationArc2D() */

void Assembly-CSharp.dll::RTG::GizmoRotationArc2D::GizmoRotationArc2D__ctor
               (GizmoRotationArc2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__ArcShape2D);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (ArcShape2D *)FUN_?(TypeInfo__RTG__ArcShape2D);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__ArcShape2D__BorderRenderDescriptor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar2 = (ArcShape2D_BorderRenderDescriptor *)
           FUN_?(TypeInfo__RTG__ArcShape2D__BorderRenderDescriptor);
  (pAVar2->fields)._borderFlags = 3;
  (pAVar1->fields)._borderRenderDesc = pAVar2;
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
  (this->fields)._numProjectedPoints = 100;
  return;
}


/* Single get_RotationAngle() */

float Assembly-CSharp.dll::RTG::GizmoRotationArc2D::GizmoRotationArc2D_get_RotationAngle
                (GizmoRotationArc2D *this,MethodInfo *method)

{
  pAVar1 = (this->fields)._arc;
  if (pAVar1 != (ArcShape2D *)0x0) {
    return (pAVar1->fields)._degreeAngleFromStart;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Void set_NumProjectedPoints(Int32) */

void Assembly-CSharp.dll::RTG::GizmoRotationArc2D::GizmoRotationArc2D_set_NumProjectedPoints
               (GizmoRotationArc2D *this,int32_t value,MethodInfo *method)

{
  iVar1 = 3;
  if (2 < value) {
    iVar1 = value;
  }
  (this->fields)._numProjectedPoints = iVar1;
  return;
}


/* Void set_RotationAngle(Single) */

void Assembly-CSharp.dll::RTG::GizmoRotationArc2D::GizmoRotationArc2D_set_RotationAngle
               (GizmoRotationArc2D *this,float value,MethodInfo *method)

{
  this_00 = (this->fields)._arc;
  if (this_00 != (ArcShape2D *)0x0) {
    fVar1 = (float)FUN_?(value,_UNK_?);
    (this_00->fields)._degreeAngleFromStart = fVar1;
    ArcShape2D::ArcShape2D_CalculateEndPoint(this_00,(MethodInfo *)0x0);
    (this_00->fields)._areBorderPointsDirty = 1;
    return;
  }
  FUN_?(value);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

