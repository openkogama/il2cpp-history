
/* Void Initialize() */

void Assembly-CSharp.dll::MVPointLight::MVPointLight_Initialize
               (MVPointLight *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__IInputSignalReceiver);
    func_?(&
                    MethodInfo__MVPointLight__OnInputStateUpdate_LogicInputState__LogicObjectManager_
                   );
    func_?(&StringLiteral_hide);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields)._._._.data;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)StringLiteral_hide,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
code_?:
      pMVar2 = (this->fields).lightObject;
      if (pMVar2 != (MVPointLightObject *)0x0) {
        MVLogicObject::MVLogicObject_SetupCulling
                  ((MVLogicObject *)this,(pMVar2->fields).visualObject,2.0,(MethodInfo *)0x0);
        MVPointLight_SetLightToData(this,(MethodInfo *)0x0);
        MVPointLight_UpdateTexture(this,(MethodInfo *)0x0);
        MVPointLight_UpdateVisible(this,(MethodInfo *)0x0);
        MVPointLight_UpdateColorForLightSphere(this,(MethodInfo *)0x0);
        pLVar3 = (this->fields).lightComponent;
        if (pLVar3 != (Light *)0x0) {
          radius = UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_range
                             (pLVar3,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          pCVar4 = (this->fields)._.cullingSubscriberBase;
          if (pCVar4 != (CullingSubscriberBase *)0x0) {
            CullingSubscriberBase::CullingSubscriberBase_Destroy(pCVar4,(MethodInfo *)0x0);
            iVar5 = (*(this->klass->vtable).get_WorldPosition_1.methodPtr)();
            fVar6 = *(float *)(iVar5 + 8);
            this_02 = (UnityAction_1_UnityEngine_Vector2_ *)func_?();
            if (this_02 != (UnityAction_1_UnityEngine_Vector2_ *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
              UnityAction_1_UnityEngine_Vector2___ctor
                        (this_02,(Object *)this,(this->klass->vtable).OnStateChanged.method,
                         (MethodInfo *)0x0);
              uVar7 = CONCAT44(TypeInfo__CullingSubscriberBase,&UNK_?);
              pCVar4 = (CullingSubscriberBase *)func_?();
              if (pCVar4 != (CullingSubscriberBase *)0x0) {
                position.z = fVar6;
                position.x = (float)(int)uVar7;
                position.y = (float)(int)((ulonglong)uVar7 >> 0x20);
                CullingSubscriberBase::CullingSubscriberBase__ctor_2
                          (pCVar4,radius,position,
                           (UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_02,(MethodInfo *)0x0
                          );
                (this->fields)._.cullingSubscriberBase = pCVar4;
                func_?();
                this_03 = (Action_2_Int32Enum_Object_ *)func_?();
                if (this_03 != (Action_2_Int32Enum_Object_ *)0x0) {
                  mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
                            (this_03,(Object *)this,
                             MethodInfo__MVPointLight__OnInputStateUpdate_LogicInputState__LogicObjectManager_
                             ,(MethodInfo *)0x0);
                  pIVar8 = LogicClientsideFactory::
                            LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                                      ((MVWorldObject *)this,1,
                                       (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                                       (Action_2_LogicInputState_LogicObjectManager_ *)this_03,
                                       (MethodInfo *)0x0);
                  (this->fields)._InputSignalReceiver_k__BackingField = pIVar8;
                  func_?();
                  pLVar3 = (this->fields).lightComponent;
                  if ((this->fields)._InputSignalReceiver_k__BackingField !=
                      (IInputSignalReceiver *)0x0) {
                    bVar1 = func_?();
                    if (pLVar3 != (Light *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                                ((Behaviour *)pLVar3,bVar1,(MethodInfo *)0x0);
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
    else {
      this_01 = (this->fields)._._._.data;
      if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (this_01,(Object *)StringLiteral_hide,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pOVar9 != (Object *)0x0) {
          if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
          goto code_?;
          pcVar10 = (char *)func_?();
          (this->fields).inputVisible = *pcVar10 == '\0';
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Boolean IsVisible() */

bool Assembly-CSharp.dll::MVPointLight::MVPointLight_IsVisible
               (MVPointLight *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&StringLiteral_hide);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields)._._._.data;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)StringLiteral_hide,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if ((bVar1 == 0) || ((this->fields).inputVisible == 0)) {
      return 0;
    }
    this_01 = (this->fields)._._._.data;
    if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this_01,(Object *)StringLiteral_hide,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar2 != (Object *)0x0) {
        pBStack3 = TypeInfo__System__Boolean;
        if ((pOVar2->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
          pBStack3 = (Boolean__Class *)pOVar2;
          pcVar4 = (char *)func_?();
          return *pcVar4 == '\0';
        }
        goto code_?;
      }
    }
  }
  func_?();
  pBStack3 = extraout_EDX;
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  bVar1 = (*pcVar5)();
  return bVar1;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVPointLight::MVPointLight_OnDataUpdate
               (MVPointLight *this,MethodInfo *method)

{
  MVPointLight_SetLightToData(this,(MethodInfo *)0x0);
  MVPointLight_UpdateVisible(this,(MethodInfo *)0x0);
  MVPointLight_UpdateTexture(this,(MethodInfo *)0x0);
  MVPointLight_UpdateColorForLightSphere(this,(MethodInfo *)0x0);
  woID = (this->fields)._._._.id;
  worldObjectManager = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetChunk
            (woID,(IWorldObjectManager *)worldObjectManager,(MethodInfo *)0x0);
  return;
}


/* Void OnInputStateUpdate(LogicInputState, LogicObjectManager) */

void Assembly-CSharp.dll::MVPointLight::MVPointLight_OnInputStateUpdate
               (MVPointLight *this,LogicInputState__Enum logicInputState,
               LogicObjectManager *logicObjectManager,MethodInfo *method)

{
  if (logicInputState == LogicInputState__Enum_FromColdToHot) {
    pLVar1 = (this->fields).lightComponent;
    if (pLVar1 == (Light *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pLVar1,1,(MethodInfo *)0x0);
    (this->fields).inputVisible = 1;
    MVPointLight_UpdateVisible(this,(MethodInfo *)0x0);
  }
  else if (logicInputState == LogicInputState__Enum_FromHotToCold) {
    pLVar1 = (this->fields).lightComponent;
    if (pLVar1 != (Light *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)pLVar1,0,(MethodInfo *)0x0);
      (this->fields).inputVisible = 0;
      MVPointLight_UpdateVisible(this,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  }
  return;
}


/* Void SetLightToData() */

void Assembly-CSharp.dll::MVPointLight::MVPointLight_SetLightToData
               (MVPointLight *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_intensity);
    func_?(&StringLiteral_range);
    func_?(&StringLiteral_color);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields)._._._.data;
  if (pDVar1 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (pDVar1,(Object *)StringLiteral_color,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar2 == 0) {
code_?:
      pDVar1 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields)._._._.data;
      if (pDVar1 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
        bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          (pDVar1,(Object *)StringLiteral_intensity,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        if (bVar2 == 0) {
          return;
        }
        pDVar1 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields)._._._.data
        ;
        if (pDVar1 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
          bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,GUILoginHandler+PlanetData]::
                  Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                            (pDVar1,(Object *)StringLiteral_range,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                            );
          if (bVar2 == 0) {
            return;
          }
          pDVar3 = (this->fields)._._._.data;
          if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                               (pDVar3,(Object *)StringLiteral_range,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
            uVar5 = CONCAT44(TypeInfo__System__Single,pOVar4);
            if (pOVar4 != (Object *)0x0) {
              if ((pOVar4->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
              goto code_?;
              pfVar6 = (float *)func_?();
              value = *pfVar6;
              pDVar3 = (this->fields)._._._.data;
              if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                   (pDVar3,(Object *)StringLiteral_intensity,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   );
                uVar5 = CONCAT44(TypeInfo__System__Single,pOVar4);
                if (pOVar4 != (Object *)0x0) {
                  if ((pOVar4->klass->_0).element_class !=
                      (TypeInfo__System__Single->_0).element_class) goto code_?;
                  pfVar6 = (float *)func_?(pOVar4);
                  pLVar7 = (this->fields).lightComponent;
                  if (pLVar7 != (Light *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_intensity
                              (pLVar7,*pfVar6,(MethodInfo *)0x0);
                    pLVar7 = (this->fields).lightComponent;
                    if (pLVar7 != (Light *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_range
                                (pLVar7,value,(MethodInfo *)0x0);
                      fVar8 = (this->fields).minumumScale;
                      fVar9 = (value / (this->fields).rangeMaxValue) /
                               (this->fields).scaleRestriction;
                      if (fVar8 <= fVar9) {
                        fVar8 = fVar9;
                      }
                      pMVar10 = (this->fields).lightObject;
                      if ((pMVar10 != (MVPointLightObject *)0x0) &&
                         (this_00 = (pMVar10->fields).pointLightPlaneTransform,
                         this_00 != (Transform *)0x0)) {
                        value_01.y = fVar8;
                        value_01.x = fVar8;
                        value_01.z = fVar8;
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                                  (this_00,value_01,(MethodInfo *)0x0);
                        this_01 = (this->fields)._.cullingSubscriberBase;
                        if (this_01 != (CullingSubscriberBase *)0x0) {
                          CullingSubscriberBase::CullingSubscriberBase_set_Radius
                                    (this_01,value,(MethodInfo *)0x0);
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
      }
      goto code_?;
    }
    pDVar3 = (this->fields)._._._.data;
    if ((pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
       (unaff_EDI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              (pDVar3,(Object *)StringLiteral_color,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              ), unaff_EBX = TypeInfo__System__Single, unaff_EDI == (Object *)0x0))
    goto code_?;
    iVar11 = func_?(unaff_EDI,TypeInfo__System__Single);
    if (iVar11 != 0) {
      pLVar7 = (this->fields).lightComponent;
      if (((*(int *)(iVar11 + 0xc) != 0) && (1 < *(uint *)(iVar11 + 0xc))) &&
         (2 < *(uint *)(iVar11 + 0xc))) {
        if (pLVar7 != (Light *)0x0) {
          value_00.g = (float)*(undefined4 *)(iVar11 + 0x14);
          value_00.r = (float)*(undefined4 *)(iVar11 + 0x10);
          value_00.b = (float)*(undefined4 *)(iVar11 + 0x18);
          value_00.a = 1.0;
          UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_color
                    (pLVar7,value_00,(MethodInfo *)0x0);
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  uVar5 = func_?(unaff_EDI,unaff_EBX);
code_?:
  func_?(uVar5);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void SetupLightCulling(Single) */

void Assembly-CSharp.dll::MVPointLight::MVPointLight_SetupLightCulling
               (MVPointLight *this,float radius,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields)._.cullingSubscriberBase;
  if (pCVar1 != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy(pCVar1,(MethodInfo *)0x0);
    pVVar2 = (Vector3 *)(*(this->klass->vtable).get_WorldPosition_1.methodPtr)();
    position = *pVVar2;
    this_00 = (UnityAction_1_UnityEngine_Vector2_ *)func_?();
    if (this_00 != (UnityAction_1_UnityEngine_Vector2_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
      UnityAction_1_UnityEngine_Vector2___ctor
                (this_00,(Object *)this,(this->klass->vtable).OnStateChanged.method,
                 (MethodInfo *)0x0);
      pCVar1 = (CullingSubscriberBase *)func_?();
      if (pCVar1 != (CullingSubscriberBase *)0x0) {
        CullingSubscriberBase::CullingSubscriberBase__ctor_2
                  (pCVar1,radius,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_00,
                   (MethodInfo *)0x0);
        (this->fields)._.cullingSubscriberBase = pCVar1;
        func_?();
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateColorForLightSphere() */

void Assembly-CSharp.dll::MVPointLight::MVPointLight_UpdateColorForLightSphere
               (MVPointLight *this,MethodInfo *method)

{
  pMVar1 = this;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral__TintColor);
    func_?(&StringLiteral_color);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._.data;
  if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?();
  }
  else {
    unaff_EBX = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (this_00,(Object *)StringLiteral_color,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    this = (MVPointLight *)TypeInfo__System__Single;
    if (unaff_EBX == (Object *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = func_?(unaff_EBX,TypeInfo__System__Single);
      if (iVar2 == 0) goto code_?;
    }
    pMVar3 = (pMVar1->fields).lightObject;
    if ((pMVar3 == (MVPointLightObject *)0x0) ||
       (this_01 = (pMVar3->fields).pointLightPlaneMesh, this_01 == (MeshRenderer *)0x0))
    goto code_?;
    pMVar4 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials
                       ((Renderer *)this_01,(MethodInfo *)0x0);
    if (pMVar4 == (Material__Array *)0x0) goto code_?;
    if (pMVar4->max_length != 0) {
      if (iVar2 != 0) {
        if (((*(int *)(iVar2 + 0xc) == 0) || (*(uint *)(iVar2 + 0xc) < 2)) ||
           (*(uint *)(iVar2 + 0xc) < 3)) goto code_?;
        if (pMVar4->vector[0] != (Material *)0x0) {
          value.y = (float)*(undefined4 *)(iVar2 + 0x14);
          value.x = (float)*(undefined4 *)(iVar2 + 0x10);
          value.z = (float)*(undefined4 *)(iVar2 + 0x18);
          value.w = 1.0;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                    (pMVar4->vector[0],StringLiteral__TintColor,value,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?(unaff_EBX,this);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateTexture() */

void Assembly-CSharp.dll::MVPointLight::MVPointLight_UpdateTexture
               (MVPointLight *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_halo);
    func_?(&StringLiteral__unity3d);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields)._._._.data;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)StringLiteral_halo,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      return;
    }
    pMVar2 = (this->fields).lightObject;
    if (((pMVar2 != (MVPointLightObject *)0x0) &&
        (pSVar3 = (pMVar2->fields).streamedTexture, pSVar3 != (StreamedTextureToMeshRenderer *)0x0))
       && (pSVar4 = (pSVar3->fields)._._.url, pSVar4 != (String *)0x0)) {
      pSVar4 = mscorlib.dll::System::String::String_Remove_1
                         (pSVar4,(pSVar4->fields)._stringLength + -9,(MethodInfo *)0x0);
      this_01 = (this->fields)._._._.data;
      if ((this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
         (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (this_01,(Object *)StringLiteral_halo,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             ), pOVar5 != (Object *)0x0)) {
        if ((pOVar5->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        func_?();
        str1 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
        pSVar4 = mscorlib.dll::System::String::String_Concat_4
                           (pSVar4,str1,StringLiteral__unity3d,(MethodInfo *)0x0);
        pMVar2 = (this->fields).lightObject;
        if ((pMVar2 != (MVPointLightObject *)0x0) &&
           (pSVar3 = (pMVar2->fields).streamedTexture,
           pSVar3 != (StreamedTextureToMeshRenderer *)0x0)) {
          (pSVar3->fields)._._.url = pSVar4;
          func_?();
          pMVar2 = (this->fields).lightObject;
          if ((pMVar2 != (MVPointLightObject *)0x0) &&
             (pSVar3 = (pMVar2->fields).streamedTexture,
             pSVar3 != (StreamedTextureToMeshRenderer *)0x0)) {
            StreamedTextureToMeshRenderer::StreamedTextureToMeshRenderer_ReDownload
                      (pSVar3,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateVisible() */

void Assembly-CSharp.dll::MVPointLight::MVPointLight_UpdateVisible
               (MVPointLight *this,MethodInfo *method)

{
  pMVar1 = (this->fields).lightObject;
  if (pMVar1 != (MVPointLightObject *)0x0) {
    this_00 = (pMVar1->fields).pointLightPlaneMesh;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Boolean);
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
      func_?(&StringLiteral_hide);
      cRam_? = '\x01';
    }
    this_01 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields)._._._.data;
    if (this_01 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (this_01,(Object *)StringLiteral_hide,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if ((bVar2 == 0) || ((this->fields).inputVisible == 0)) {
        this._0_1_ = false;
code_?:
        if (this_00 != (MeshRenderer *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                    ((Renderer *)this_00,this._0_1_,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        this_02 = (this->fields)._._._.data;
        if (this_02 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (this_02,(Object *)StringLiteral_hide,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          uVar4 = CONCAT44(TypeInfo__System__Boolean,pOVar3);
          if (pOVar3 != (Object *)0x0) {
            if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
            goto code_?;
            pcVar5 = (char *)func_?();
            this._0_1_ = *pcVar5 == '\0';
            goto code_?;
          }
        }
      }
    }
  }
  uVar4 = func_?();
code_?:
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* MVPointLight(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVPointLight::MVPointLight__ctor
               (MVPointLight *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVPointLightObject);
    cRam_? = '\x01';
  }
  (this->fields).minumumScale = 0.03;
  (this->fields).rangeMaxValue = 10.0;
  (this->fields).scaleRestriction = 2.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(ObjectPrefab *)(pPVar1->fields).mvPointLightPrefab,
               worldObjects,(MethodInfo *)0x0);
    piVar2 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 | 0x10000;
    piVar2 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 | 0x8000;
    pMVar3 = (MVPointLightObject *)(this->fields)._._.component;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) =
         *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    if (pMVar3 == (MVPointLightObject *)0x0) {
      (this->fields).lightObject = (MVPointLightObject *)0x0;
    }
    else {
      if (((((ObjectPrefab__Class *)pMVar3->klass)->_1).typeHierarchyDepth <
           (TypeInfo__MVPointLightObject->_1).typeHierarchyDepth) ||
         ((((ObjectPrefab__Class *)pMVar3->klass)->_1).typeHierarchy
          [(TypeInfo__MVPointLightObject->_1).typeHierarchyDepth - 1] !=
          (Il2CppClass *)TypeInfo__MVPointLightObject)) goto code_?;
      (this->fields).lightObject = pMVar3;
      if (((((ObjectPrefab__Class *)pMVar3->klass)->_1).typeHierarchyDepth <
           (TypeInfo__MVPointLightObject->_1).typeHierarchyDepth) ||
         ((((ObjectPrefab__Class *)pMVar3->klass)->_1).typeHierarchy
          [(TypeInfo__MVPointLightObject->_1).typeHierarchyDepth - 1] !=
          (Il2CppClass *)TypeInfo__MVPointLightObject)) goto code_?;
    }
    func_?(&(this->fields).lightObject);
    pMVar3 = (this->fields).lightObject;
    if (pMVar3 != (MVPointLightObject *)0x0) {
      pLVar4 = (pMVar3->fields).pointLight;
      (this->fields).lightComponent = pLVar4;
      func_?(&(this->fields).lightComponent,pLVar4);
      pLVar4 = (this->fields).lightComponent;
      if (pLVar4 != (Light *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pLVar4,0,(MethodInfo *)0x0);
        this_00 = (this->fields)._._.gameObject;
        if (this_00 != (GameObject *)0x0) {
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (this_00,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Vector3);
            cRam_? = '\x01';
          }
          if (this_01 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                      (this_01,TypeInfo__UnityEngine__Vector3->static_fields->oneVector,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pMVar3 = extraout_EDX;
code_?:
  func_?(pMVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVPointLight::MVPointLight_get_DocumentationType
          (MVPointLight *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_PointLight;
}

