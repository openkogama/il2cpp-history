
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
  this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_02,
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
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields)._._.data;
  if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_00,(Object *)StringLiteral_settings,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    worldObjectID =
         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
    ;
    if (value.m_Index != 0) {
      bVar1 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if ((*(byte *)(*(int *)value.m_Index + 0xb8) < bVar1) ||
         (*(Dictionary_2_System_Object_System_Object___Class **)
           (*(int *)(*(int *)value.m_Index + 100) + -4 + (uint)bVar1 * 4) !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      goto code_?;
    }
    if ((this_02 !=
         (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
         0x0) && (mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            ((Dictionary_2_System_Object_System_Object_ *)this_02,
                             (Object *)StringLiteral_settings,(Object *)value.m_Index,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                            ), this_01 != (MVNetworkGame_OperationRequests *)0x0)) {
      MVNetworkGame+OperationRequests::
      MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial_1
                (this_01,(int32_t)worldObjectID,(Dictionary_2_System_Object_System_Object_ *)this_02
                 ,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields)._._.data;
  if (this_01 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    method_00 = (MethodInfo *)StringLiteral_identifier;
    TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_01,(Object *)StringLiteral_identifier,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    identifier.m_Index = 0;
    if (TVar1.m_Index != 0) {
      if (*(String__Class **)TVar1.m_Index == TypeInfo__System__String) {
        identifier = TVar1;
      }
      if ((String *)identifier.m_Index == (String *)0x0) goto code_?;
    }
    if (this_00 != (ThemeRepository *)0x0) {
      iVar2 = 0;
      pTVar3 = ThemeRepository::ThemeRepository_GetThemePrefab
                         (this_00,(String *)identifier.m_Index,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pTVar3 = (Theme *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                  ((Object *)pTVar3,
                                   Theme_MethodInfo__UnityEngine__Object__Instantiate<Theme>_Theme_)
      ;
      ppTVar4 = &(this->fields)._Visualization_k__BackingField;
      *ppTVar4 = pTVar3;
      func_?();
      if (*ppTVar4 != (Theme *)0x0) {
        pLStack_5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                     &UNK_?;
        Theme::Theme_Initialize(*ppTVar4,(this->fields)._._.id,(MethodInfo *)0x0);
        if (*ppTVar4 != (Theme *)0x0) {
          uVar6 = *unaff_FS_OFFSET;
          *unaff_FS_OFFSET = &stack0xffffffe8;
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
            func_?(&
                            MethodInfo__System__Collections__Generic__List<ThemeComponent>__GetEnumerator__
                           );
            cRam_? = '\x01';
          }
          if (*(char *)(iVar2 + 0x10) != '\0') {
            this_02 = MVGameControllerBase::MVGameControllerBase_get_SkyboxManager
                                ((MethodInfo *)0x0);
            if (this_02 == (SkyboxManager *)0x0) goto code_?;
            method_00 = (MethodInfo *)0x0;
            SkyboxManager::SkyboxManager_Disable(this_02,(MethodInfo *)0x0);
          }
          if (*(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **)(iVar2 + 0x18)
              != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
            pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                               ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                 *)&pLStack_5,
                                *(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                  **)(iVar2 + 0x18),
                                MethodInfo__System__Collections__Generic__List<ThemeComponent>__GetEnumerator__
                               );
            LStack_8._list = (List_1_System_Object_ *)pLVar7->_list;
            LStack_8._index = pLVar7->_index;
            LStack_8._version = pLVar7->_version;
            LStack_8._current = *(Object **)&pLVar7->_current;
            while( true ) {
              bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                      Object]::List_1_T_Enumerator_System_Object__MoveNext
                                (&LStack_8,
                                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__MoveNext__
                                );
              if (bVar9 == 0) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                          ((Object *)&LStack_8,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__Dispose__
                           ,method_00);
                *unaff_FS_OFFSET = uVar6;
                return;
              }
              if ((RegexCharClass_SingleRange)LStack_8._current == (RegexCharClass_SingleRange)0x0)
              break;
              (**(code **)(*(int *)LStack_8._current + 0xe0))
                        (LStack_8._current,*(undefined4 *)(*(int *)LStack_8._current + 0xe4));
            }
          }
code_?:
          func_?();
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  pTVar1 = (this->fields)._Visualization_k__BackingField;
  if (pTVar1 != (Theme *)0x0) {
    (*(code *)(pTVar1->klass->vtable).ThemeReset.method)(pTVar1);
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
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVWorldObjectClient->_1).cctor_finished_or_no_cctor == 0) {
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
  this_00 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1(this_00,(MethodInfo *)0x0)
  ;
  ppGVar1 = &(this->fields)._.gameObject;
  *ppGVar1 = this_00;
  func_?(ppGVar1,this_00);
  if (*ppGVar1 != (GameObject *)0x0) {
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                      ((Object_1 *)*ppGVar1,(MethodInfo *)0x0);
    (this->fields)._.goId = iVar2;
    if (*ppGVar1 != (GameObject *)0x0) {
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (*ppGVar1,(MethodInfo *)0x0);
      ppTVar4 = &(this->fields)._.transform;
      *ppTVar4 = pTVar3;
      func_?();
      pMVar5 = MVWorldObjectClient::MVWorldObjectClient_GetTransformData
                          ((MVWorldObjectClient_TransformData *)&stack0xffffffa8,
                           (MVWorldObjectClient *)this,data,(MethodInfo *)0x0);
      fVar6 = (pMVar5->rotation).w;
      uVar7 = (pMVar5->rotation).z;
      uVar8 = (pMVar5->rotation).x;
      uVar9 = (pMVar5->rotation).y;
      value.y = (float)uVar9;
      value.x = (float)uVar8;
      if (*ppTVar4 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (*ppTVar4,pMVar5->position,(MethodInfo *)0x0);
        if (*ppTVar4 != (Transform *)0x0) {
          value.z = (float)uVar7;
          value.w = fVar6;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                    (*ppTVar4,value,(MethodInfo *)0x0);
          if (*ppGVar1 != (GameObject *)0x0) {
            pCVar10 = (Collider *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                                (*ppGVar1,
                                 UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Collider>__
                                );
            (this->fields)._.collider = pCVar10;
            func_?();
            MVWorldObjectClient::MVWorldObjectClient_CreateWorldObject
                      ((MVWorldObjectClient *)this,data,worldObjects,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields)._._.data;
  if (this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    uVar1 = func_?(&stack0xfffffff0);
    func_?(uVar1);
    pcVar2 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar2)();
    return pSVar3;
  }
  TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::TextureId]::
          Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                    (this_00,(Object *)StringLiteral_identifier,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                    );
  TVar5.m_Index = 0;
  if (TVar4.m_Index != 0) {
    if (*(String__Class **)TVar4.m_Index == TypeInfo__System__String) {
      TVar5 = TVar4;
    }
    if ((String *)TVar5.m_Index == (String *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      pSVar3 = (String *)(*pcVar2)();
      return pSVar3;
    }
  }
  return (String *)TVar5.m_Index;
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
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields)._._.data;
  if (this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    func_?();
    TVar1.m_Index = extraout_EDX;
  }
  else {
    TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_00,(Object *)StringLiteral_settings,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar1.m_Index == 0) {
      return (Dictionary_2_System_Object_System_Object_ *)0x0;
    }
    bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if ((bVar2 <= *(byte *)(*(int *)TVar1.m_Index + 0xb8)) &&
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)TVar1.m_Index + 100) + -4 + (uint)bVar2 * 4) ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      return (Dictionary_2_System_Object_System_Object_ *)TVar1.m_Index;
    }
  }
  func_?(TVar1.m_Index);
  pcVar3 = (code *)swi(3);
  pDVar4 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar3)();
  return pDVar4;
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

