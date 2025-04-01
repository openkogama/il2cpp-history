
/* Void Destroy() */

void Assembly-CSharp.dll::MVSkybox::MVSkybox_Destroy(MVSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((this->fields).inventoryObject == 0) {
    pSVar1 = (this->fields).skybox;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pSVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pSVar1 = (this->fields).skybox;
      if (pSVar1 != (SkyboxManager *)0x0) {
        SkyboxManager::SkyboxManager_Remove(pSVar1,this,(MethodInfo *)0x0);
        pSVar1 = (this->fields).skybox;
        if (pSVar1 != (SkyboxManager *)0x0) {
          SkyboxManager::SkyboxManager_RefreshColor(pSVar1,(MethodInfo *)0x0);
          goto code_?;
        }
      }
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
code_?:
  MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVSkybox::MVSkybox_Initialize(MVSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
    func_?(&
                    MethodInfo__MVSkybox__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
                   );
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SkyboxManager((MethodInfo *)0x0);
  ppSVar2 = &(this->fields).skybox;
  *ppSVar2 = pSVar1;
  func_?(ppSVar2,pSVar1);
  if (*ppSVar2 != (SkyboxManager *)0x0) {
    SkyboxManager::SkyboxManager_Add(*ppSVar2,this,(MethodInfo *)0x0);
    this_00 = (this->fields)._._.gameObject;
    if (this_00 != (GameObject *)0x0) {
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_00,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (this_01 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                  (this_01,TypeInfo__UnityEngine__Vector3->static_fields->oneVector,
                   (MethodInfo *)0x0);
        MVLogicObject::MVLogicObject_SetupCulling
                  ((MVLogicObject *)this,(this->fields)._._.gameObject,2.0,(MethodInfo *)0x0);
        this_02 = (UnityAction_2_System_Int32_System_Int32_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]
        ::UnityAction_2_System_Int32_System_Int32___ctor
                  (this_02,(Object *)this,
                   MethodInfo__MVSkybox__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
                   ,(MethodInfo *)0x0);
        pIVar3 = LogicClientsideFactory::LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                           ((MVWorldObject *)this,1,
                            (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                            (Action_2_LogicInputState_LogicObjectManager_ *)this_02,
                            (MethodInfo *)0x0);
        (this->fields)._InputSignalReceiver_k__BackingField = pIVar3;
        func_?();
        if (*ppSVar2 != (SkyboxManager *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((in_stack_4->fields).initialized != 0) {
            SkyboxManager::SkyboxManager_ComputeSkyboxSettings
                      (in_stack_4,&(in_stack_4->fields).targetColor,
                       &(in_stack_4->fields).targetSunAngle,
                       &(in_stack_4->fields).targetFogDensity,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine_2
                      ((MonoBehaviour *)in_stack_4,StringLiteral_DoAnimate,(MethodInfo *)0x0)
            ;
            UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine
                      ((MonoBehaviour *)in_stack_4,StringLiteral_DoAnimate,(MethodInfo *)0x0)
            ;
          }
          return;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVSkybox::MVSkybox_InitializeInventory(MVSkybox *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_InitializeInventory((MVLogicObject *)this,(MethodInfo *)0x0);
  (this->fields).inventoryObject = 1;
  return;
}


/* Void InputStateUpdateCallback(LogicInputState, LogicObjectManager) */

void Assembly-CSharp.dll::MVSkybox::MVSkybox_InputStateUpdateCallback
               (MVSkybox *this,LogicInputState__Enum logicInputState,
               LogicObjectManager *logicObjectManager,MethodInfo *method)

{
  if ((logicInputState == LogicInputState__Enum_FromColdToHot) ||
     (logicInputState == LogicInputState__Enum_FromHotToCold)) {
    this_00 = (this->fields).skybox;
    if (this_00 == (SkyboxManager *)0x0) {
      uVar1 = func_?(&puStack_2);
      func_?(uVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    SkyboxManager::SkyboxManager_RefreshColor(this_00,(MethodInfo *)0x0);
  }
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVSkybox::MVSkybox_Reset(MVSkybox *this,MethodInfo *method)

{
  this_00 = (this->fields).skybox;
  if (this_00 != (SkyboxManager *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((this_00->fields).initialized != 0) {
      SkyboxManager::SkyboxManager_ComputeSkyboxSettings
                (this_00,&(this_00->fields).targetColor,&(this_00->fields).targetSunAngle,
                 &(this_00->fields).targetFogDensity,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine_2
                ((MonoBehaviour *)this_00,StringLiteral_DoAnimate,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine
                ((MonoBehaviour *)this_00,StringLiteral_DoAnimate,(MethodInfo *)0x0);
    }
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetDefaultInteractionFlags() */

void Assembly-CSharp.dll::MVSkybox::MVSkybox_SetDefaultInteractionFlags
               (MVSkybox *this,MethodInfo *method)

{
  uVar1 = *(undefined4 *)((int)&(this->fields).defaultInteractionFlags + 4);
  *(int *)&(this->fields)._._.interactionFlags = (int)(this->fields).defaultInteractionFlags;
  *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = uVar1;
  return;
}


/* Void SetDeleteOnlyInteractionFlags() */

void Assembly-CSharp.dll::MVSkybox::MVSkybox_SetDeleteOnlyInteractionFlags
               (MVSkybox *this,MethodInfo *method)

{
  *(undefined4 *)&(this->fields)._._.interactionFlags = 1;
  *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = 0;
  return;
}


/* MVSkybox(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVSkybox::MVSkybox__ctor
               (MVSkybox *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(pPVar1->fields).mvSkyboxPrefab,worldObjects,
               (MethodInfo *)0x0);
    piVar2 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 | 0x10000;
    uVar3 = *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    piVar2 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 | 0x8000;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = uVar3;
    uVar3 = *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    *(int *)&(this->fields).defaultInteractionFlags = (int)(this->fields)._._.interactionFlags;
    *(undefined4 *)((int)&(this->fields).defaultInteractionFlags + 4) = uVar3;
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Single get_FogDensity() */

float Assembly-CSharp.dll::MVSkybox::MVSkybox_get_FogDensity(MVSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_Skybox_data_does_not_contain_fog);
    func_?(&StringLiteral_fogDensity);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields)._._._.data
  ;
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (pDVar1,(Object *)StringLiteral_fogDensity,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar2 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Skybox_data_does_not_contain_fog,(MethodInfo *)0x0);
      return _UNK_?;
    }
    pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields)._._._.data;
    if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDVar1,(Object *)StringLiteral_fogDensity,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar3.m_Index != 0) {
        TStack4.m_Index = (int32_t)TypeInfo__System__Single;
        if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) ==
            (TypeInfo__System__Single->_0).element_class) {
          TStack4 = TVar3;
          pfVar5 = (float *)func_?();
          return *pfVar5;
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
  fVar7 = (float10)(*pcVar6)();
  return (float)fVar7;
}


/* Boolean get_SkyboxActive() */

bool Assembly-CSharp.dll::MVSkybox::MVSkybox_get_SkyboxActive(MVSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IInputSignalReceiver *)&TypeInfo__IInputSignalReceiver;
    func_?();
    cRam_? = '\x01';
  }
  pIStack_1 = (this->fields)._InputSignalReceiver_k__BackingField;
  if (pIStack_1 != (IInputSignalReceiver *)0x0) {
    pIStack_2 = TypeInfo__IInputSignalReceiver;
    uStack_3 = 1;
    bVar4 = func_?();
    return bVar4;
  }
  pIStack_1 = (IInputSignalReceiver *)&stack0xfffffffc;
  uVar5 = func_?(&uStack_3);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  bVar4 = (*pcVar6)();
  return bVar4;
}


/* Color get_SkyboxColor() */

Color * Assembly-CSharp.dll::MVSkybox::MVSkybox_get_SkyboxColor
                  (Color *__return_storage_ptr__,MVSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__SkyboxManager);
    func_?(&StringLiteral_color);
    func_?(&StringLiteral_Skybox_data_does_not_contain_col);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields)._._._.data
  ;
  if (pDVar1 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
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
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Skybox_data_does_not_contain_col,(MethodInfo *)0x0);
      if ((TypeInfo__SkyboxManager->_1).cctor_finished_or_no_cctor == 0) {
        __return_storage_ptr__ = (Color *)&UNK_?;
        func_?();
      }
      pSVar3 = TypeInfo__SkyboxManager->static_fields;
      fVar4 = (pSVar3->defaultColor).g;
      fVar5 = (pSVar3->defaultColor).b;
      fVar6 = (pSVar3->defaultColor).a;
      __return_storage_ptr__->r = (pSVar3->defaultColor).r;
      __return_storage_ptr__->g = fVar4;
      __return_storage_ptr__->b = fVar5;
      __return_storage_ptr__->a = fVar6;
      return __return_storage_ptr__;
    }
    pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields)._._._.data;
    if (pDVar1 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       (pDVar1,(Object *)StringLiteral_color,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (TVar7.m_Index == 0) goto code_?;
    iVar8 = func_?();
    if (iVar8 == 0) goto code_?;
    uVar9 = *(uint *)(iVar8 + 0xc);
    if (((uVar9 != 0) && (1 < uVar9)) && (uVar10 = *(undefined4 *)(iVar8 + 0x14), 2 < uVar9)) {
      uVar11 = *(undefined4 *)(iVar8 + 0x18);
      *(undefined4 *)TVar7.m_Index = *(undefined4 *)(iVar8 + 0x10);
      *(undefined4 *)(TVar7.m_Index + 4) = uVar10;
      *(undefined4 *)(TVar7.m_Index + 8) = uVar11;
      *(undefined4 *)(TVar7.m_Index + 0xc) = 0x3f800000;
      return (Color *)TVar7.m_Index;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  pCVar13 = (Color *)(*pcVar12)();
  return pCVar13;
}


/* Single get_SunAngle() */

float Assembly-CSharp.dll::MVSkybox::MVSkybox_get_SunAngle(MVSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_Skybox_data_does_not_contain_sun);
    func_?(&StringLiteral_sunAngle);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields)._._._.data
  ;
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (pDVar1,(Object *)StringLiteral_sunAngle,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar2 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Skybox_data_does_not_contain_sun,(MethodInfo *)0x0);
      return _UNK_?;
    }
    pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields)._._._.data;
    if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDVar1,(Object *)StringLiteral_sunAngle,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar3.m_Index != 0) {
        TStack4.m_Index = (int32_t)TypeInfo__System__Single;
        if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) ==
            (TypeInfo__System__Single->_0).element_class) {
          TStack4 = TVar3;
          pfVar5 = (float *)func_?();
          return *pfVar5;
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
  fVar7 = (float10)(*pcVar6)();
  return (float)fVar7;
}

