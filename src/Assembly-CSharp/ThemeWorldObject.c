
/* Void CommitSettings() */

void Assembly-CSharp.dll::ThemeWorldObject::ThemeWorldObject_CommitSettings
               (ThemeWorldObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&StringLiteral_settings);
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  this_02 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  if (this_02 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_02,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
      func_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
      func_?(&StringLiteral_settings);
      cRam_? = '\x01';
    }
    this_00 = (this->fields)._._.data;
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (this_00,(Object *)StringLiteral_settings,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      worldObjectID =
           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
      ;
      if ((value != (Object *)0x0) &&
         (((value->klass->_1).typeHierarchyDepth <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth ||
          ((Dictionary_2_System_Object_System_Object___Class *)
           (value->klass->_1).typeHierarchy
           [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .typeHierarchyDepth - 1] !=
           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))))
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_02,(Object *)StringLiteral_settings,value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::
        MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial_1
                  (this_01,(int32_t)worldObjectID,this_02,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::ThemeWorldObject::ThemeWorldObject_Destroy
               (ThemeWorldObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  pTVar1 = (this->fields)._Visualization_k__BackingField;
  if (pTVar1 != (Theme *)0x0) {
    Theme::Theme_Deactivate(pTVar1,(MethodInfo *)0x0);
    pTVar1 = (this->fields)._Visualization_k__BackingField;
    if (pTVar1 != (Theme *)0x0) {
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)pTVar1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::ThemeWorldObject::ThemeWorldObject_Initialize
               (ThemeWorldObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = TypeInfo__ThemeRepository->static_fields->_Instance_k__BackingField;
  method_00 = (MethodInfo *)ThemeWorldObject_get_Identifier(this,(MethodInfo *)0x0);
  if (this_00 == (ThemeRepository *)0x0) {
code_?:
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar2 = ThemeRepository::ThemeRepository_GetThemePrefab
                     (this_00,(String *)method_00,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pTVar2 = (Theme *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)pTVar2,
                               Theme_MethodInfo__UnityEngine__Object__Instantiate<Theme>_Theme_);
  (this->fields)._Visualization_k__BackingField = pTVar2;
  func_?();
  pTVar2 = (this->fields)._Visualization_k__BackingField;
  if (pTVar2 == (Theme *)0x0) goto code_?;
  Theme::Theme_Initialize(pTVar2,(this->fields)._._.id,(MethodInfo *)0x0);
  pTVar2 = (this->fields)._Visualization_k__BackingField;
  if (pTVar2 == (Theme *)0x0) goto code_?;
  uVar3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<ThemeComponent>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  LStack_4._list = (List_1_System_Object_ *)0x0;
  LStack_4._index = 0;
  LStack_4._version = 0;
  LStack_4._current = (Object *)0x0;
  if ((pTVar2->fields).overrideSkyboxManager != 0) {
    this_02 = MVGameControllerBase::MVGameControllerBase_get_SkyboxManager((MethodInfo *)0x0);
    if (this_02 == (SkyboxManager *)0x0) goto code_?;
    method_00 = (MethodInfo *)0x0;
    SkyboxManager::SkyboxManager_Disable(this_02,(MethodInfo *)0x0);
  }
  this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (pTVar2->fields).components;
  if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)&pLStack_6,this_01,
                        MethodInfo__System__Collections__Generic__List<ThemeComponent>__GetEnumerator__
                       );
    LStack_4._list = (List_1_System_Object_ *)pLVar5->_list;
    LStack_4._index = pLVar5->_index;
    LStack_4._version = pLVar5->_version;
    LStack_4._current = *(Object **)&pLVar5->_current;
    while( true ) {
      bVar7 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_4,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__MoveNext__
                        );
      if (bVar7 == 0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&LStack_4,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__Dispose__
                   ,method_00);
        *unaff_FS_OFFSET = uVar3;
        return;
      }
      if ((RegexCharClass_SingleRange)LStack_4._current == (RegexCharClass_SingleRange)0x0) break;
      (**(code **)(*(int *)LStack_4._current + 0xdc))
                (LStack_4._current,*(undefined4 *)(*(int *)LStack_4._current + 0xe0));
    }
  }
code_?:
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::ThemeWorldObject::ThemeWorldObject_OnDataUpdate
               (ThemeWorldObject *this,MethodInfo *method)

{
  this_00 = (this->fields)._Visualization_k__BackingField;
  if (this_00 != (Theme *)0x0) {
    Theme::Theme_Initialize(this_00,(this->fields)._._.id,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::ThemeWorldObject::ThemeWorldObject_Reset
               (ThemeWorldObject *this,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  pTVar1 = (this->fields)._Visualization_k__BackingField;
  if (pTVar1 != (Theme *)0x0) {
    (*(pTVar1->klass->vtable).ThemeReset.methodPtr)(pTVar1);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* ThemeWorldObject(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::ThemeWorldObject::ThemeWorldObject__ctor
               (ThemeWorldObject *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pMStack_1 = (MVWorldObjectClient__Class *)&TypeInfo__MVWorldObjectClient;
    uStack_2 = CONCAT44(&UNK_?,(undefined4)uStack_2);
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVWorldObjectClient->_1).cctor_finished_or_no_cctor == 0) {
    pMStack_1 = TypeInfo__MVWorldObjectClient;
    uStack_2 = CONCAT44(&UNK_?,(undefined4)uStack_2);
    func_?();
  }
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Collider>__
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    cRam_? = '\x01';
  }
  (this->fields)._.previewLayerMask = 1;
  MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject__ctor
            ((MVWorldObject *)this,(MethodInfo *)0x0);
  pGVar3 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  if (pGVar3 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1
              (pGVar3,(MethodInfo *)0x0);
    (this->fields)._.gameObject = pGVar3;
    func_?(&(this->fields)._.gameObject,pGVar3);
    pGVar3 = (this->fields)._.gameObject;
    if (pGVar3 != (GameObject *)0x0) {
      iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                        ((Object_1 *)pGVar3,(MethodInfo *)0x0);
      (this->fields)._.goId = iVar4;
      pGVar3 = (this->fields)._.gameObject;
      if (pGVar3 != (GameObject *)0x0) {
        pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar3,(MethodInfo *)0x0);
        (this->fields)._.transform = pTVar5;
        func_?(&(this->fields)._.transform,pTVar5);
        pMVar6 = MVWorldObjectClient::MVWorldObjectClient_GetTransformData
                           (&MStack_7,(MVWorldObjectClient *)this,data,(MethodInfo *)0x0);
        pTVar5 = (this->fields)._.transform;
        fStack_8 = (pMVar6->rotation).w;
        fStack_9 = (pMVar6->position).x;
        fStack_10 = (pMVar6->position).y;
        fStack_11 = (pMVar6->position).z;
        fStack_12 = (pMVar6->rotation).x;
        uStack_13._0_4_ = (pMVar6->rotation).y;
        uStack_13._4_4_ = (pMVar6->rotation).z;
        fStack_14 = (pMVar6->position).x;
        fStack_15 = (pMVar6->position).y;
        fStack_16 = (pMVar6->position).z;
        fStack_17 = (pMVar6->rotation).x;
        uStack_2._0_4_ = (pMVar6->rotation).y;
        uStack_2._4_4_ = (pMVar6->rotation).z;
        if (pTVar5 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar5,pMVar6->position,(MethodInfo *)0x0);
          pTVar5 = (this->fields)._.transform;
          if (pTVar5 != (Transform *)0x0) {
            value.y = (float)(undefined4)uStack_13;
            value.x = fStack_12;
            value.z = (float)uStack_13._4_4_;
            value.w = fStack_8;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                      (pTVar5,value,(MethodInfo *)0x0);
            pGVar3 = (this->fields)._.gameObject;
            if (pGVar3 != (GameObject *)0x0) {
              pCVar18 = (Collider *)
                       UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                       GameObject_GetComponent_1
                                 (pGVar3,
                                  UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Collider>__
                                 );
              (this->fields)._.collider = pCVar18;
              func_?(&(this->fields)._.collider,pCVar18);
              MVWorldObjectClient::MVWorldObjectClient_CreateWorldObject
                        ((MVWorldObjectClient *)this,data,worldObjects,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* String get_Identifier() */

String * Assembly-CSharp.dll::ThemeWorldObject::ThemeWorldObject_get_Identifier
                   (ThemeWorldObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._.data;
  if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    uVar1 = func_?(&stack0xfffffff0);
    func_?(uVar1);
    pcVar2 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar2)();
    return pSVar3;
  }
  pSVar4 = (String *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
           Dictionary_2_System_Object_System_Object__get_Item
                     (this_00,(Object *)StringLiteral_identifier,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  pSVar3 = (String *)0x0;
  if (pSVar4 != (String *)0x0) {
    if (pSVar4->klass == TypeInfo__System__String) {
      pSVar3 = pSVar4;
    }
    if (pSVar3 == (String *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      pSVar3 = (String *)(*pcVar2)();
      return pSVar3;
    }
  }
  return pSVar3;
}


/* Dictionary`2[System.Object,System.Object] get_SettingsData() */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::ThemeWorldObject::ThemeWorldObject_get_SettingsData
          (ThemeWorldObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&StringLiteral_settings);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._._.data;
  if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    func_?();
    pDVar2 = extraout_EDX;
  }
  else {
    unaff_ESI = (Dictionary_2_System_Object_System_Object_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (pDVar1,(Object *)StringLiteral_settings,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    if (unaff_ESI == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      return (Dictionary_2_System_Object_System_Object_ *)0x0;
    }
    pDVar2 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth <= (unaff_ESI->klass->_1).typeHierarchyDepth) &&
       ((Dictionary_2_System_Object_System_Object___Class *)
        (unaff_ESI->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth - 1] ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      return unaff_ESI;
    }
  }
  func_?(unaff_ESI,pDVar2);
  pcVar3 = (code *)swi(3);
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar3)();
  return pDVar1;
}


/* Boolean get_SkyboxOverride() */

bool Assembly-CSharp.dll::ThemeWorldObject::ThemeWorldObject_get_SkyboxOverride
               (ThemeWorldObject *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pTVar2 = (this->fields)._Visualization_k__BackingField;
  if (pTVar2 != (Theme *)0x0) {
    return (pTVar2->fields).overrideSkyboxManager;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void set_Visualization(Theme) */

void Assembly-CSharp.dll::ThemeWorldObject::ThemeWorldObject_set_Visualization
               (ThemeWorldObject *this,Theme *value,MethodInfo *method)

{
  (this->fields)._Visualization_k__BackingField = value;
  func_?(&(this->fields)._Visualization_k__BackingField,value);
  return;
}

