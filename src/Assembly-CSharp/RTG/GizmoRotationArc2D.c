
/* Void Render(GizmoRotationArc2DLookAndFeel, Camera) */

void Assembly-CSharp.dll::RTG::GizmoRotationArc2D::GizmoRotationArc2D_Render
               (GizmoRotationArc2D *this,GizmoRotationArc2DLookAndFeel *lookAndFeel,Camera *camera,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    func_?(&MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
    func_?(&MethodInfo__RTG__Singleton<RTG::GizmoSolidMaterial>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
    func_?(&TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>);
    cRam_? = '\x01';
  }
  if (((this->fields)._type != 0) && ((this->fields)._projectionPoly != (PolygonShape2D *)0x0)) {
    if ((this->fields)._type != 1) {
      return;
    }
    pAVar1 = (this->fields)._arc;
    if (pAVar1 != (ArcShape2D *)0x0) {
      if ((pAVar1 != (ArcShape2D *)0x0) && (lookAndFeel != (GizmoRotationArc2DLookAndFeel *)0x0)) {
        pLVar2 = PrimitiveFactory::PrimitiveFactory_Generate2DArcBorderPoints
                           ((pAVar1->fields)._origin,(pAVar1->fields)._startPoint,
                            (pAVar1->fields)._degreeAngleFromStart,
                            (lookAndFeel->fields)._useShortestRotation,
                            (this->fields)._numProjectedPoints,(MethodInfo *)0x0);
        pAVar1 = (this->fields)._arc;
        if (pAVar1 != (ArcShape2D *)0x0) {
          fVar3 = (pAVar1->fields)._origin.x;
          this_00 = (this->fields)._projectionPoly;
          fVar4 = (pAVar1->fields)._origin.y;
          if (this_00 != (PolygonShape2D *)0x0) {
            pLVar5 = PolygonShape2D::PolygonShape2D_GetPoints(this_00,(MethodInfo *)0x0);
            VVar6.y = fVar4;
            VVar6.x = fVar3;
            pLVar2 = PrimitiveFactory::PrimitiveFactory_ProjectArcPointsOnPoly2DBorder
                               (VVar6,pLVar2,pLVar5,(MethodInfo *)0x0);
            if (((lookAndFeel->fields)._fillFlags & 1) != 0) {
              if ((TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>->_1).cctor_finished_or_no_cctor
                  == 0) {
                func_?();
              }
              pGVar7 = (GizmoSolidMaterial *)
                       Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                                 (MethodInfo__RTG__Singleton<RTG::GizmoSolidMaterial>__get_Get__);
              if (pGVar7 == (GizmoSolidMaterial *)0x0) goto code_?;
              GizmoSolidMaterial::GizmoSolidMaterial_ResetValuesToSensibleDefaults
                        (pGVar7,(MethodInfo *)0x0);
              GizmoSolidMaterial::GizmoSolidMaterial_SetCullModeOff(pGVar7,(MethodInfo *)0x0);
              GizmoSolidMaterial::GizmoSolidMaterial_SetLit(pGVar7,0,(MethodInfo *)0x0);
              GizmoSolidMaterial::GizmoSolidMaterial_SetColor
                        (pGVar7,(lookAndFeel->fields)._color,(MethodInfo *)0x0);
              GizmoSolidMaterial::GizmoSolidMaterial_SetPass(pGVar7,0,(MethodInfo *)0x0);
              pAVar1 = (this->fields)._arc;
              if (pAVar1 == (ArcShape2D *)0x0) goto code_?;
              GLRenderer::GLRenderer_DrawTriangleFan2D_1
                        ((pAVar1->fields)._origin,pLVar2,camera,(MethodInfo *)0x0);
            }
            if ((lookAndFeel->fields)._fillFlags == 0) {
              return;
            }
            if ((TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).cctor_finished_or_no_cctor ==
                0) {
              func_?(TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
            }
            pGVar8 = (GizmoLineMaterial *)
                     Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                               (MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
            if (pGVar8 != (GizmoLineMaterial *)0x0) {
              GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults
                        (pGVar8,(MethodInfo *)0x0);
              GizmoLineMaterial::GizmoLineMaterial_SetColor
                        (pGVar8,(lookAndFeel->fields)._borderColor,(MethodInfo *)0x0);
              GizmoLineMaterial::GizmoLineMaterial_SetPass(pGVar8,0,(MethodInfo *)0x0);
              if (((lookAndFeel->fields)._fillFlags & 4) != 0) {
                GLRenderer::GLRenderer_DrawLines2D(pLVar2,camera,(MethodInfo *)0x0);
              }
              if (((lookAndFeel->fields)._fillFlags & 2) == 0) {
                return;
              }
              pLVar5 = (List_1_UnityEngine_Vector2_ *)func_?();
              mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
              __Il2CppFullySharedGenericType]::
              LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                        ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                         pLVar5,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__
                        );
              pAVar1 = (this->fields)._arc;
              if (pAVar1 != (ArcShape2D *)0x0) {
                if ((pLVar5 != (List_1_UnityEngine_Vector2_ *)0x0) &&
                   (func_?(pLVar5,(pAVar1->fields)._origin.x,(pAVar1->fields)._origin.y,
                                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                                   ), pLVar2 != (List_1_UnityEngine_Vector2_ *)0x0)) {
                  VVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                          List_1_UnityEngine_Vector2__get_Item
                                    (pLVar2,0,
                                     MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                                    );
                  func_?(pLVar5,VVar6.x,VVar6.y,
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                                 );
                  pAVar1 = (this->fields)._arc;
                  if (pAVar1 != (ArcShape2D *)0x0) {
                    func_?(pLVar5,(pAVar1->fields)._origin.x,(pAVar1->fields)._origin.y,
                                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                                   );
                    VVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]
                            ::List_1_UnityEngine_Vector2__get_Item
                                      (pLVar2,(pLVar2->fields)._size + -1,
                                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                                      );
                    func_?(pLVar5,VVar6.x,VVar6.y,
                                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                                   );
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
    goto code_?;
  }
  if ((lookAndFeel == (GizmoRotationArc2DLookAndFeel *)0x0) ||
     (pAVar1 = (this->fields)._arc, pAVar1 == (ArcShape2D *)0x0)) goto code_?;
  ArcShape2D::ArcShape2D_set_ForceShortestArc
            (pAVar1,(lookAndFeel->fields)._useShortestRotation,(MethodInfo *)0x0);
  if (((lookAndFeel->fields)._fillFlags & 1) != 0) {
    if ((TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>);
    }
    pGVar7 = (GizmoSolidMaterial *)
             Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                       (MethodInfo__RTG__Singleton<RTG::GizmoSolidMaterial>__get_Get__);
    if (pGVar7 == (GizmoSolidMaterial *)0x0) goto code_?;
    GizmoSolidMaterial::GizmoSolidMaterial_ResetValuesToSensibleDefaults(pGVar7,(MethodInfo *)0x0);
    GizmoSolidMaterial::GizmoSolidMaterial_SetCullModeOff(pGVar7,(MethodInfo *)0x0);
    GizmoSolidMaterial::GizmoSolidMaterial_SetLit(pGVar7,0,(MethodInfo *)0x0);
    GizmoSolidMaterial::GizmoSolidMaterial_SetColor
              (pGVar7,(lookAndFeel->fields)._color,(MethodInfo *)0x0);
    GizmoSolidMaterial::GizmoSolidMaterial_SetPass(pGVar7,0,(MethodInfo *)0x0);
    pAVar1 = (this->fields)._arc;
    if (pAVar1 == (ArcShape2D *)0x0) goto code_?;
    (*(code *)(pAVar1->klass->vtable).RenderArea.method)
              (pAVar1,camera,(pAVar1->klass->vtable).RenderBorder.methodPtr);
  }
  if ((TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
  }
  pGVar8 = (GizmoLineMaterial *)
           Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                     (MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
  if (pGVar8 != (GizmoLineMaterial *)0x0) {
    GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults(pGVar8,(MethodInfo *)0x0);
    GizmoLineMaterial::GizmoLineMaterial_SetColor
              (pGVar8,(lookAndFeel->fields)._borderColor,(MethodInfo *)0x0);
    GizmoLineMaterial::GizmoLineMaterial_SetPass(pGVar8,0,(MethodInfo *)0x0);
    pAVar1 = (this->fields)._arc;
    if (pAVar1 != (ArcShape2D *)0x0) {
      (*(code *)(pAVar1->klass->vtable).RenderBorder.method)
                (pAVar1,camera,(pAVar1->klass->vtable).ContainsPoint.methodPtr);
      return;
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void SetArcData(Vector2, Vector2, Single) */

void Assembly-CSharp.dll::RTG::GizmoRotationArc2D::GizmoRotationArc2D_SetArcData
               (GizmoRotationArc2D *this,Vector2 arcOrigin,Vector2 arcStart,float radius,
               MethodInfo *method)

{
  pAVar1 = (this->fields)._arc;
  if (pAVar1 != (ArcShape2D *)0x0) {
    ArcShape2D::ArcShape2D_set_Origin(pAVar1,arcOrigin,(MethodInfo *)0x0);
    pAVar1 = (this->fields)._arc;
    if (pAVar1 != (ArcShape2D *)0x0) {
      ArcShape2D::ArcShape2D_SetArcData(pAVar1,arcStart,radius,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* GizmoRotationArc2D() */

void Assembly-CSharp.dll::RTG::GizmoRotationArc2D::GizmoRotationArc2D__ctor
               (GizmoRotationArc2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__ArcShape2D);
    cRam_? = '\x01';
  }
  this_00 = (ArcShape2D *)func_?(TypeInfo__RTG__ArcShape2D);
  ArcShape2D::ArcShape2D__ctor(this_00,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&this->fields;
  (this->fields)._arc = this_00;
  func_?(method_00,this_00);
  (this->fields)._numProjectedPoints = 100;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
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
    ArcShape2D::ArcShape2D_set_DegreeAngleFromStart(this_00,value,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

