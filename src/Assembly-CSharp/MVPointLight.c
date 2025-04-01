
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
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields)._._._.data
  ;
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (pDVar1,(Object *)StringLiteral_hide,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar2 == 0) {
code_?:
      pMVar3 = (this->fields).lightObject;
      if (pMVar3 != (MVPointLightObject *)0x0) {
        MVLogicObject::MVLogicObject_SetupCulling
                  ((MVLogicObject *)this,(pMVar3->fields).visualObject,2.0,(MethodInfo *)0x0);
        MVPointLight_SetLightToData(this,(MethodInfo *)0x0);
        MVPointLight_UpdateTexture(this,(MethodInfo *)0x0);
        MVPointLight_UpdateVisible(this,(MethodInfo *)0x0);
        MVPointLight_UpdateColorForLightSphere(this,(MethodInfo *)0x0);
        this_00 = (this->fields).lightComponent;
        if (this_00 != (Light *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_range(this_00,(MethodInfo *)0x0)
          ;
          if (cRam_? == '\0') {
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          this_01 = (this->fields)._.cullingSubscriberBase;
          if (this_01 != (CullingSubscriberBase *)0x0) {
            CullingSubscriberBase::CullingSubscriberBase_Destroy(this_01,(MethodInfo *)0x0);
            puVar4 = (undefined8 *)(*(code *)(this->klass->vtable).get_WorldPosition_1.method)();
            uVar5 = *puVar4;
            fVar6 = *(float *)(puVar4 + 1);
            this_03 = (UnityAction_1_UnityEngine_Vector2_ *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
            UnityAction_1_UnityEngine_Vector2___ctor
                      (this_03,(Object *)this,
                       (this->klass->vtable).UpdateControllerUpdate_1.methodPtr,(MethodInfo *)0x0);
            this_04 = (MVWorldObject__Class *)func_?();
            worldObject = (MVWorldObject *)uVar5;
            position.z = fVar6;
            position.x = (float)(int)uVar5;
            position.y = (float)(int)((ulonglong)uVar5 >> 0x20);
            CullingSubscriberBase::CullingSubscriberBase__ctor_2
                      ((CullingSubscriberBase *)this_04,(float)worldObject,position,
                       (UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_03,(MethodInfo *)0x0);
            worldObject->klass = this_04;
            func_?();
            this_05 = (UnityAction_2_System_Int32_System_Int32_ *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::
            Int32]::UnityAction_2_System_Int32_System_Int32___ctor
                      (this_05,(Object *)worldObject,
                       MethodInfo__MVPointLight__OnInputStateUpdate_LogicInputState__LogicObjectManager_
                       ,(MethodInfo *)0x0);
            pIVar7 = LogicClientsideFactory::
                     LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                               (worldObject,1,(Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                                (Action_2_LogicInputState_LogicObjectManager_ *)this_05,
                                (MethodInfo *)0x0);
            worldObject[2].fields.position.x = (float)pIVar7;
            func_?();
            this_02 = (Behaviour *)worldObject[2].fields.ownerActorNr;
            if (worldObject[2].fields.position.x != 0.0) {
              bVar2 = func_?();
              if (this_02 != (Behaviour *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                          (this_02,bVar2,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    else {
      pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields)._._._.data;
      if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        TVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (pDVar1,(Object *)StringLiteral_hide,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        if (TVar8.m_Index != 0) {
          if (*(Il2CppClass **)(*(int *)TVar8.m_Index + 0x20) !=
              (TypeInfo__System__Boolean->_0).element_class) goto code_?;
          pcVar9 = (char *)func_?();
          (this->fields).inputVisible = *pcVar9 == '\0';
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields)._._._.data
  ;
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (pDVar1,(Object *)StringLiteral_hide,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if ((bVar2 == 0) || ((this->fields).inputVisible == 0)) {
      return 0;
    }
    pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields)._._._.data;
    if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDVar1,(Object *)StringLiteral_hide,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar3.m_Index != 0) {
        TStack4.m_Index = (int32_t)TypeInfo__System__Boolean;
        if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) ==
            (TypeInfo__System__Boolean->_0).element_class) {
          TStack4 = TVar3;
          pcVar5 = (char *)func_?();
          return *pcVar5 == '\0';
        }
        goto code_?;
      }
    }
  }
  TStack4.m_Index = (int32_t)&UNK_?;
  func_?();
  TStack4.m_Index = (int32_t)extraout_EDX;
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  bVar2 = (*pcVar6)();
  return bVar2;
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
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields)._._._.data
  ;
  if (pDVar1 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (pDVar1,(Object *)StringLiteral_color,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar2 == 0) {
code_?:
      pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields)._._._.data;
      if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                          (pDVar1,(Object *)StringLiteral_intensity,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        if (bVar2 == 0) {
          return;
        }
        pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                 (this->fields)._._._.data;
        if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
          bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                            (pDVar1,(Object *)StringLiteral_range,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                            );
          if (bVar2 == 0) {
            return;
          }
          pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                   (this->fields)._._._.data;
          if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
            TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                              (pDVar1,(Object *)StringLiteral_range,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
            uVar4 = CONCAT44(TypeInfo__System__Single,TVar3.m_Index);
            if (TVar3.m_Index != 0) {
              if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
                  (TypeInfo__System__Single->_0).element_class) goto code_?;
              pfVar5 = (float *)func_?();
              value = *pfVar5;
              pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                       (this->fields)._._._.data;
              if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
                TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,UnityEngine::UIElements::TextureId]::
                        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                  (pDVar1,(Object *)StringLiteral_intensity,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                  );
                uVar4 = CONCAT44(TypeInfo__System__Single,TVar3.m_Index);
                if (TVar3.m_Index != 0) {
                  if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
                      (TypeInfo__System__Single->_0).element_class) goto code_?;
                  pfVar5 = (float *)func_?(TVar3.m_Index);
                  pLVar6 = (this->fields).lightComponent;
                  if (pLVar6 != (Light *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_intensity
                              (pLVar6,*pfVar5,(MethodInfo *)0x0);
                    pLVar6 = (this->fields).lightComponent;
                    if (pLVar6 != (Light *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_range
                                (pLVar6,value,(MethodInfo *)0x0);
                      fVar7 = (value / _UNK_?) * _UNK_?;
                      fVar8 = _UNK_?;
                      if (_UNK_? <= fVar7) {
                        fVar8 = fVar7;
                      }
                      pMVar9 = (this->fields).lightObject;
                      if ((pMVar9 != (MVPointLightObject *)0x0) &&
                         (this_00 = (pMVar9->fields).pointLightPlaneTransform,
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
    pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields)._._._.data;
    if ((pDVar1 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) ||
       (unaff_EDI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                              (pDVar1,(Object *)StringLiteral_color,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              ), unaff_EBX = TypeInfo__System__Single, unaff_EDI.m_Index == 0))
    goto code_?;
    iVar10 = func_?(unaff_EDI.m_Index,TypeInfo__System__Single);
    if (iVar10 != 0) {
      uVar11 = *(uint *)(iVar10 + 0xc);
      pLVar6 = (this->fields).lightComponent;
      if (((uVar11 != 0) && (1 < uVar11)) && (2 < uVar11)) {
        if (pLVar6 != (Light *)0x0) {
          value_00.g = (float)*(undefined4 *)(iVar10 + 0x14);
          value_00.r = (float)*(undefined4 *)(iVar10 + 0x10);
          value_00.b = (float)*(undefined4 *)(iVar10 + 0x18);
          value_00.a = 1.0;
          UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_color
                    (pLVar6,value_00,(MethodInfo *)0x0);
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  uVar4 = func_?(unaff_EDI.m_Index,unaff_EBX);
code_?:
  func_?(uVar4);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void SetupLightCulling(Single) */

void Assembly-CSharp.dll::MVPointLight::MVPointLight_SetupLightCulling
               (MVPointLight *this,float radius,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingSubscriberBase);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
    cRam_? = '\x01';
  }
  ppCVar1 = &(this->fields)._.cullingSubscriberBase;
  pCVar2 = *ppCVar1;
  if (pCVar2 != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy(pCVar2,(MethodInfo *)0x0);
    pVVar3 = (Vector3 *)
             (*(code *)(this->klass->vtable).get_WorldPosition_1.method)
                       (&stack0xffffffe8,this,(this->klass->vtable).set_WorldPosition.methodPtr);
    position = *pVVar3;
    this_00 = (UnityAction_1_UnityEngine_Vector2_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
    UnityAction_1_UnityEngine_Vector2___ctor
              (this_00,(Object *)this,(this->klass->vtable).UpdateControllerUpdate_1.methodPtr,
               (MethodInfo *)0x0);
    pCVar2 = (CullingSubscriberBase *)func_?(TypeInfo__CullingSubscriberBase);
    CullingSubscriberBase::CullingSubscriberBase__ctor_2
              (pCVar2,radius,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_00,
               (MethodInfo *)0x0);
    *ppCVar1 = pCVar2;
    func_?();
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            (this->fields)._._._.data;
  if (this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
code_?:
    func_?();
  }
  else {
    unaff_EBX = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (this_00,(Object *)StringLiteral_color,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    this = (MVPointLight *)TypeInfo__System__Single;
    if (unaff_EBX.m_Index == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = func_?(unaff_EBX.m_Index,TypeInfo__System__Single);
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
        uVar5 = *(uint *)(iVar2 + 0xc);
        if (((uVar5 == 0) || (uVar5 < 2)) || (uVar5 < 3)) goto code_?;
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
  func_?(unaff_EBX.m_Index,this);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields)._._._.data
  ;
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (pDVar1,(Object *)StringLiteral_halo,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar2 == 0) {
      return;
    }
    pMVar3 = (this->fields).lightObject;
    if (((pMVar3 != (MVPointLightObject *)0x0) &&
        (pSVar4 = (pMVar3->fields).streamedTexture, pSVar4 != (StreamedTextureToMeshRenderer *)0x0))
       && (pSVar5 = (pSVar4->fields)._._.url, pSVar5 != (String *)0x0)) {
      pSVar5 = mscorlib.dll::System::String::String_Remove_1
                         (pSVar5,(pSVar5->fields)._stringLength + -9,(MethodInfo *)0x0);
      pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields)._._._.data;
      if ((pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) &&
         (TVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (pDVar1,(Object *)StringLiteral_halo,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            ), TVar6.m_Index != 0)) {
        if (*(Il2CppClass **)(*(int *)TVar6.m_Index + 0x20) !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        func_?();
        str1 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
        pSVar5 = mscorlib.dll::System::String::String_Concat_4
                           (pSVar5,str1,StringLiteral__unity3d,(MethodInfo *)0x0);
        pMVar3 = (this->fields).lightObject;
        if ((pMVar3 != (MVPointLightObject *)0x0) &&
           (pSVar4 = (pMVar3->fields).streamedTexture,
           pSVar4 != (StreamedTextureToMeshRenderer *)0x0)) {
          (pSVar4->fields)._._.url = pSVar5;
          func_?();
          pMVar3 = (this->fields).lightObject;
          if ((pMVar3 != (MVPointLightObject *)0x0) &&
             (pSVar4 = (pMVar3->fields).streamedTexture,
             pSVar4 != (StreamedTextureToMeshRenderer *)0x0)) {
            StreamedTextureToMeshRenderer::StreamedTextureToMeshRenderer_ReDownload
                      (pSVar4,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
    pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields)._._._.data;
    if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                        (pDVar2,(Object *)StringLiteral_hide,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if ((bVar3 == 0) || ((this->fields).inputVisible == 0)) {
        this._0_1_ = false;
code_?:
        if (this_00 != (MeshRenderer *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                    ((Renderer *)this_00,this._0_1_,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                 (this->fields)._._._.data;
        if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
          TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (pDVar2,(Object *)StringLiteral_hide,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
          uVar5 = CONCAT44(TypeInfo__System__Boolean,TVar4.m_Index);
          if (TVar4.m_Index != 0) {
            if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) !=
                (TypeInfo__System__Boolean->_0).element_class) goto code_?;
            pcVar6 = (char *)func_?();
            this._0_1_ = *pcVar6 == '\0';
            goto code_?;
          }
        }
      }
    }
  }
  uVar5 = func_?();
code_?:
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 == (PrefabPool *)0x0) {
code_?:
    func_?();
    pMVar2 = extraout_EDX;
  }
  else {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(ObjectPrefab *)(pPVar1->fields).mvPointLightPrefab,
               worldObjects,(MethodInfo *)0x0);
    piVar3 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar3 = (uint)*piVar3 | 0x10000;
    piVar3 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar3 = (uint)*piVar3 | 0x8000;
    pMVar2 = (MVPointLightObject *)(this->fields)._._.component;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) =
         *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    if (pMVar2 == (MVPointLightObject *)0x0) {
      (this->fields).lightObject = (MVPointLightObject *)0x0;
code_?:
      ppMVar4 = &(this->fields).lightObject;
      func_?(ppMVar4);
      pMVar2 = *ppMVar4;
      if (pMVar2 != (MVPointLightObject *)0x0) {
        pLVar5 = (pMVar2->fields).pointLight;
        ppLVar6 = &(this->fields).lightComponent;
        *ppLVar6 = pLVar5;
        func_?(ppLVar6,pLVar5);
        if (*ppLVar6 != (Light *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)*ppLVar6,0,(MethodInfo *)0x0);
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
      goto code_?;
    }
    bVar7 = (TypeInfo__MVPointLightObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pMVar2->klass)->_1).naturalAligment < bVar7) ||
       ((((ObjectPrefab__Class *)pMVar2->klass)->_1).typeHierarchy[bVar7 - 1] !=
        (Il2CppClass *)TypeInfo__MVPointLightObject)) goto code_?;
    (this->fields).lightObject = pMVar2;
    bVar7 = (TypeInfo__MVPointLightObject->_1).naturalAligment;
    if ((bVar7 <= (((ObjectPrefab__Class *)pMVar2->klass)->_1).naturalAligment) &&
       ((((ObjectPrefab__Class *)pMVar2->klass)->_1).typeHierarchy[bVar7 - 1] ==
        (Il2CppClass *)TypeInfo__MVPointLightObject)) goto code_?;
  }
  func_?(pMVar2);
  pMVar2 = extraout_EDX_00;
code_?:
  func_?(pMVar2);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

