
/* Void AwaitSpawnThenClose() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_AwaitSpawnThenClose
               (SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int>);
    func_?(&MethodInfo__SpawnRoleMenu__Close_int_);
    cRam_? = '\x01';
  }
  (this->fields).awaitingSpawn = 1;
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar1 != (MVLocalPlayer *)0x0) {
    this_00 = (pMVar1->fields)._.spawnRolesManager;
    this_01 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<int>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_01,(Object *)this,MethodInfo__SpawnRoleMenu__Close_int_,(MethodInfo *)0x0);
    if (this_00 != (SpawnRolesManager *)0x0) {
      SpawnRolesManager::SpawnRolesManager_add_OnSpawnRoleActivated
                (this_00,(Action_1_Int32_ *)this_01,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Single CalculateElementPosition(Int32) */

float Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_CalculateElementPosition
                (SpawnRoleMenu *this,int32_t index,MethodInfo *method)

{
  return (float)(index + 1) * (this->fields).elementSpacing +
         (float)index * (this->fields).selectionElementWidth +
         (this->fields).selectionElementWidth * _UNK_?;
}


/* Int32 CalculateNewSelectedItem() */

int32_t Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_CalculateNewSelectedItem
                  (SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Count__
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).SelectionElementsList;
  if (pLVar1 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
    if ((pLVar1->fields)._size == 1) {
      return 0;
    }
    pTVar2 = (Transform *)(this->fields).elementContainer;
    if (pTVar2 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                ((Vector3 *)&stack0xffffffe4,pTVar2,(MethodInfo *)0x0);
      pTVar2 = (Transform *)(this->fields).elementContainer;
      if (pTVar2 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                  ((Vector3 *)&stack0xffffffe4,pTVar2,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        fVar3 = (float10)func_?();
        return (int)fVar3;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Void Close(Int32) */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_Close
               (SpawnRoleMenu *this,int32_t spawnRoleID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__SpawnRoleMenu____c___Close_b__62_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SpawnRoleMenu____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__SpawnRoleMenu____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SpawnRoleMenu____c);
  }
  callbackFunction = TypeInfo__SpawnRoleMenu____c->static_fields->__9__62_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__SpawnRoleMenu____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SpawnRoleMenu____c);
    }
    object = TypeInfo__SpawnRoleMenu____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__SpawnRoleMenu____c___Close_b__62_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__SpawnRoleMenu____c->static_fields->__9__62_0 = callbackFunction;
    func_?(&TypeInfo__SpawnRoleMenu____c->static_fields->__9__62_0,callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 == (MainCameraManager *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  (in_stack_3->fields).maskMode = in_stack_4;
  if (in_stack_4 == 0) {
    pCVar5 = (in_stack_3->fields).mainCamera;
    if (pCVar5 != (Camera *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                (pCVar5,(in_stack_3->fields).cullingMask,(MethodInfo *)0x0);
      (in_stack_3->fields).blueModeEnabled = 0;
      MainCameraManager::MainCameraManager_RenderLogic
                (in_stack_3,(in_stack_3->fields).isLogicRendered,(MethodInfo *)0x0);
      return;
    }
  }
  else if (in_stack_4 == 1) {
    pCVar5 = (in_stack_3->fields).mainCamera;
    iVar6 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_CamRotateTarget,(MethodInfo *)0x0);
    if (pCVar5 != (Camera *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                (pCVar5,1 << ((byte)iVar6 & 0x1f),(MethodInfo *)0x0);
      (in_stack_3->fields).blueModeEnabled = 1;
      return;
    }
  }
  else {
    if (in_stack_4 != 2) {
      return;
    }
    if ((in_stack_3->fields).mainCamera != (Camera *)0x0) {
      uStack7 = 0;
      if (pcRam_? == (code *)0x0) {
        pcRam_? = (code *)func_?();
      }
      (*pcRam_?)();
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void CreateDefaultAvatarElement() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_CreateDefaultAvatarElement
               (SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__Insert_int__DefaultSpawnRoleSelectionElement_
                   );
    func_?(&
                    DefaultSpawnRoleSelectionElement_MethodInfo__UnityEngine__Object__Instantiate<DefaultSpawnRoleSelectionElement>_DefaultSpawnRoleSelectionElement__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__SpawnRoleMenu__OnSpawnRoleActivated_int_);
    func_?(&MethodInfo__SpawnRoleMenu__OnSpawnRoleSelected_int_);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).defaultSelectionElementPrefab;
  pTVar2 = (Transform *)(this->fields).elementContainer;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pDVar1 = (DefaultSpawnRoleSelectionElement *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                     ((Object *)pDVar1,pTVar2,0,
                      DefaultSpawnRoleSelectionElement_MethodInfo__UnityEngine__Object__Instantiate<DefaultSpawnRoleSelectionElement>_DefaultSpawnRoleSelectionElement__UnityEngine__Transform__bool_
                     );
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar3 != (MVLocalPlayer *)0x0) {
    MVLocalPlayer::MVLocalPlayer_get_DefaultSpawnRoleId(pMVar3,(MethodInfo *)0x0);
    this_01 = (UnityAction_1_System_Int32Enum_ *)func_?((this->fields).shownTeam);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_01,(Object *)this,MethodInfo__SpawnRoleMenu__OnSpawnRoleSelected_int_,
               (MethodInfo *)0x0);
    this_02 = (UnityAction_1_System_Int32Enum_ *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_02,(Object *)this,MethodInfo__SpawnRoleMenu__OnSpawnRoleActivated_int_,
               (MethodInfo *)0x0);
    if (pDVar1 != (DefaultSpawnRoleSelectionElement *)0x0) {
      (*(code *)(pDVar1->klass->vtable).Initialize.method)
                (pDVar1,0,this_02,0,(pDVar1->klass->vtable).Select.methodPtr,this_01);
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if (pMVar3 != (MVLocalPlayer *)0x0) {
        pMVar4 = MVLocalPlayer::MVLocalPlayer_get_Body(pMVar3,(MethodInfo *)0x0);
        if (pMVar4 != (MVBody *)0x0) {
          DefaultSpawnRoleSelectionElement::DefaultSpawnRoleSelectionElement_SetupPreviewImage
                    (pDVar1,(pMVar4->fields)._._._.gameObject,(MethodInfo *)0x0);
          (*(code *)(pDVar1->klass->vtable).OnUnSelected.method)
                    (pDVar1,(pDVar1->klass->vtable).UpdateButtonUI.methodPtr);
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pDVar1,(MethodInfo *)0x0);
          if (pTVar2 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling
                      (pTVar2,(MethodInfo *)0x0);
            this_00 = (this->fields).SelectionElementsList;
            if (this_00 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Insert
                        ((List_1_System_Object_ *)this_00,0,(Object *)pDVar1,
                         MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__Insert_int__DefaultSpawnRoleSelectionElement_
                        );
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void CreateSpawnRoleSelectionElement(Int32, Int32, List`1[ISpawnRolePreviewObject],
   List`1[MVWorldObjectClient]) */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_CreateSpawnRoleSelectionElement
               (SpawnRoleMenu *this,int32_t startIndex,int32_t index,
               List_1_ISpawnRolePreviewObject_ *sortedSpawnRoles,
               List_1_MVWorldObjectClient_ *sortedWorldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ISpawnRolePreviewObject);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__Add_DefaultSpawnRoleSelectionElement_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&
                    SpawnRoleSelectionElement_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSelectionElement>_SpawnRoleSelectionElement__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__SpawnRoleMenu__OnSpawnRoleActivated_int_);
    func_?(&MethodInfo__SpawnRoleMenu__OnSpawnRoleSelected_int_);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    cRam_? = '\x01';
  }
  original = (this->fields).selectionElementPrefab;
  parent = (Transform *)(this->fields).elementContainer;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pDVar1 = (DefaultSpawnRoleSelectionElement *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                     ((Object *)original,parent,0,
                      SpawnRoleSelectionElement_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSelectionElement>_SpawnRoleSelectionElement__UnityEngine__Transform__bool_
                     );
  if (sortedWorldObjects != (List_1_MVWorldObjectClient_ *)0x0) {
    RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       sortedWorldObjects,index,
                       MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                      );
    if (RVar2 != (RegexCharClass_SingleRange)0x0) {
      if (sortedSpawnRoles != (List_1_ISpawnRolePreviewObject_ *)0x0) {
        RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           sortedSpawnRoles,index,
                           MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__get_Item_int_
                          );
        if (RVar2 != (RegexCharClass_SingleRange)0x0) {
          func_?(2);
          iVar3 = (this->fields).shownTeam;
          this_01 = (UnityAction_1_System_Int32Enum_ *)func_?(iVar3);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
          UnityAction_1_System_Int32Enum___ctor
                    (this_01,(Object *)this,MethodInfo__SpawnRoleMenu__OnSpawnRoleSelected_int_,
                     (MethodInfo *)0x0);
          puVar4 = &UNK_?;
          pUVar5 = TypeInfo__UnityEngine__Events__UnityAction<int>;
          this_02 = (UnityAction_1_System_Int32Enum_ *)
                    func_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
          UnityAction_1_System_Int32Enum___ctor
                    (this_02,(Object *)this,MethodInfo__SpawnRoleMenu__OnSpawnRoleActivated_int_,
                     (MethodInfo *)0x0);
          if (pDVar1 != (DefaultSpawnRoleSelectionElement *)0x0) {
            this_03 = (DefaultSpawnRoleSelectionElement *)(startIndex + index);
            pSVar6 = (SpawnRoleMenu *)(pDVar1->klass->vtable).Select.methodPtr;
            (*(code *)(pDVar1->klass->vtable).Initialize.method)
                      (pDVar1,this_03,puVar4,pUVar5,iVar3,this_01);
            RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               sortedSpawnRoles,index,
                               MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__get_Item_int_
                              );
            if (RVar2 != (RegexCharClass_SingleRange)0x0) {
              uVar7 = 0;
              if (*(ushort *)(*(int *)RVar2 + 0xb6) != 0) {
                do {
                  if (*(ISpawnRolePreviewObject__Class **)
                       (*(int *)(*(int *)RVar2 + 0x58) + (uint)uVar7 * 8) ==
                      TypeInfo__ISpawnRolePreviewObject) {
                    puVar8 = (undefined4 *)
                             (*(int *)RVar2 +
                             (*(int *)(*(int *)(*(int *)RVar2 + 0x58) + 4 + (uint)uVar7 * 8) + 0x18)
                             * 8);
                    goto code_?;
                  }
                  uVar7 = uVar7 + 1;
                  pDVar1 = this_03;
                  this = pSVar6;
                } while (uVar7 < *(ushort *)(*(int *)RVar2 + 0xb6));
              }
              pSVar6 = this;
              this_03 = pDVar1;
              puVar8 = (undefined4 *)func_?(RVar2);
code_?:
              spawnRoleObject = (GameObject *)(*(code *)*puVar8)();
              DefaultSpawnRoleSelectionElement::DefaultSpawnRoleSelectionElement_SetupPreviewImage
                        (this_03,spawnRoleObject,(MethodInfo *)0x0);
              (*(code *)(this_03->klass->vtable).OnUnSelected.method)
                        (this_03,(this_03->klass->vtable).UpdateButtonUI.methodPtr);
              this_00 = (pSVar6->fields).SelectionElementsList;
              if (this_00 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                List_1_System_Object__Add
                          ((List_1_System_Object_ *)this_00,(Object *)this_03,
                           MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__Add_DefaultSpawnRoleSelectionElement_
                          );
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* List`1[ISpawnRolePreviewObject] GetSortedList(List`1[ISpawnRolePreviewObject]) */

List_1_ISpawnRolePreviewObject_ *
Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_GetSortedList
          (SpawnRoleMenu *this,List_1_ISpawnRolePreviewObject_ *unsortedList,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ISpawnRolePreviewObject>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ISpawnRolePreviewObject>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ISpawnRolePreviewObject>__get_Current__
                   );
    func_?(&TypeInfo__ISpawnRolePreviewObject);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__Add_ISpawnRolePreviewObject_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__Insert_int__ISpawnRolePreviewObject_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__List__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            func_?(TypeInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__List__);
  if (unsortedList != (List_1_ISpawnRolePreviewObject_ *)0x0) {
    pLVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)&stack0xffffffcc,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        unsortedList,
                        MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__GetEnumerator__
                       );
    uStack_1 = 1;
    item = pLVar4->_current;
code_?:
    do {
      bVar5 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffbc,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ISpawnRolePreviewObject>__MoveNext__
                        );
      if (bVar5 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&stack0xffffffbc,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ISpawnRolePreviewObject>__Dispose__
                   ,in_stack_6);
        *unaff_FS_OFFSET = uStack_3;
        return (List_1_ISpawnRolePreviewObject_ *)this_00;
      }
      index = 0;
      if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      break;
      for (; index < (this_00->fields)._size; index = index + 1) {
        if (item == (RegexCharClass_SingleRange)0x0) goto code_?;
        bVar7 = func_?();
        RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_00,index,
                           MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__get_Item_int_
                          );
        if (RVar8 == (RegexCharClass_SingleRange)0x0) goto code_?;
        bVar9 = func_?();
        if (bVar7 < bVar9) {
          RVar8 = (RegexCharClass_SingleRange)
                  MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__Insert_int__ISpawnRolePreviewObject_
          ;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Insert
                    ((List_1_System_Object_ *)this_00,index,(Object *)item,
                     MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__Insert_int__ISpawnRolePreviewObject_
                    );
          item = RVar8;
          goto code_?;
        }
      }
      RVar8 = (RegexCharClass_SingleRange)
              MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__Add_ISpawnRolePreviewObject_
      ;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_00,(Object *)item,
                 MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__Add_ISpawnRolePreviewObject_
                );
      item = RVar8;
    } while( true );
  }
code_?:
  func_?();
  func_?();
  pcVar10 = (code *)swi(3);
  pLVar11 = (List_1_ISpawnRolePreviewObject_ *)(*pcVar10)();
  return pLVar11;
}


/* List`1[MVWorldObjectClient] GetSortedWorldObjectList(List`1[MVWorldObjectClient],
   List`1[ISpawnRolePreviewObject]) */

List_1_MVWorldObjectClient_ *
Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_GetSortedWorldObjectList
          (SpawnRoleMenu *this,List_1_MVWorldObjectClient_ *wos,
          List_1_ISpawnRolePreviewObject_ *unsortedList,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ISpawnRolePreviewObject);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__Add_ISpawnRolePreviewObject_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Insert_int__MVWorldObjectClient_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__Insert_int__ISpawnRolePreviewObject_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__List__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>);
    func_?(&TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            func_?(TypeInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__List__);
  RVar1 = (RegexCharClass_SingleRange)
          func_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  RVar2 = RVar1;
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)RVar1,
             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
  index_00 = 0;
  if (unsortedList == (List_1_ISpawnRolePreviewObject_ *)0x0) {
code_?:
    func_?();
    pcVar3 = (code *)swi(3);
    pLVar4 = (List_1_MVWorldObjectClient_ *)(*pcVar3)();
    return pLVar4;
  }
code_?:
  do {
    if ((unsortedList->fields)._size <= index_00) {
      return (List_1_MVWorldObjectClient_ *)RVar1;
    }
    index = 0;
    RVar1 = RVar2;
    if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    for (; index < (this_00->fields)._size; index = index + 1) {
      RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         unsortedList,index_00,
                         MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__get_Item_int_
                        );
      if (RVar2 == (RegexCharClass_SingleRange)0x0) goto code_?;
      bVar5 = func_?(2,TypeInfo__ISpawnRolePreviewObject,RVar2);
      RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,index,
                         MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__get_Item_int_
                        );
      if (RVar2 == (RegexCharClass_SingleRange)0x0) goto code_?;
      bVar6 = func_?(2,TypeInfo__ISpawnRolePreviewObject);
      if (bVar5 < bVar6) {
        RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           unsortedList,index_00,
                           MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__get_Item_int_
                          );
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Insert
                  ((List_1_System_Object_ *)this_00,index,(Object *)RVar1,
                   MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__Insert_int__ISpawnRolePreviewObject_
                  );
        if ((wos == (List_1_MVWorldObjectClient_ *)0x0) ||
           (RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               wos,index_00,
                               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                              ), RVar2 == (RegexCharClass_SingleRange)0x0)) goto code_?;
        RVar2 = RVar1;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Insert
                  ((List_1_System_Object_ *)RVar1,index,(Object *)RVar1,
                   MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Insert_int__MVWorldObjectClient_
                  );
        index_00 = index_00 + 1;
        goto code_?;
      }
      RVar1 = RVar2;
    }
    RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       unsortedList,index_00,
                       MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__get_Item_int_
                      );
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_00,(Object *)RVar2,
               MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__Add_ISpawnRolePreviewObject_
              );
    if ((wos == (List_1_MVWorldObjectClient_ *)0x0) ||
       (item = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                         ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)wos,
                          index_00,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                         ), RVar1 == (RegexCharClass_SingleRange)0x0)) goto code_?;
    RVar2 = (RegexCharClass_SingleRange)
            MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
    ;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)RVar1,(Object *)item,
               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
              );
    index_00 = index_00 + 1;
  } while( true );
}


/* Void HandleTeamSwitching(Int32) */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_HandleTeamSwitching
               (SpawnRoleMenu *this,int32_t spawnRoleId,MethodInfo *method)

{
  iVar1 = (this->fields).shownTeam;
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 != (MVNetworkGame *)0x0) &&
     (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
     pMVar3 != (MVLocalPlayer *)0x0)) {
    if (iVar1 == (pMVar3->fields)._._Team_k__BackingField) {
      return;
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTeam
                (this_01,(this->fields).shownTeam,(MethodInfo *)0x0);
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar2 != (MVNetworkGame *)0x0) {
        this_00 = (pMVar2->fields).gameStatCounterManager;
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar2 != (MVNetworkGame *)0x0) &&
           (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
           pMVar3 != (MVLocalPlayer *)0x0)) {
          actorNr = (pMVar3->fields)._._ActorNr_k__BackingField;
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar2 != (MVNetworkGame *)0x0) &&
             ((pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
              pMVar3 != (MVLocalPlayer *)0x0 && (this_00 != (GameStatCounterManager *)0x0)))) {
            MVWorldObject.dll::GameStatCounterManager::
            GameStatCounterManager_RemoveTeamScoreOnActorLeave
                      (this_00,actorNr,(pMVar3->fields)._._Team_k__BackingField,(MethodInfo *)0x0);
            pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar2 != (MVNetworkGame *)0x0) &&
               (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
               pMVar3 != (MVLocalPlayer *)0x0)) {
              mscorlib.dll::System::Collections::Generic::Stack`1[T]+Enumerator[System::Dynamic::
              BindingRestrictions+TestBuilder+AndNode]::
              Stack_1_T_Enumerator_System_Dynamic_BindingRestrictions_TestBuilder_AndNode__Dispose
                        ((Stack_1_T_Enumerator_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_
                          *)pMVar3,(MethodInfo *)0x0);
              pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar2 != (MVNetworkGame *)0x0) &&
                 (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
                 pMVar3 != (MVLocalPlayer *)0x0)) {
                (pMVar3->fields)._._Team_k__BackingField = (this->fields).shownTeam;
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void HideBackButton() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_HideBackButton
               (SpawnRoleMenu *this,MethodInfo *method)

{
  this_00 = (this->fields).backButton;
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,0,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void HideElements(Int32, Int32, Int32) */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_HideElements
               (SpawnRoleMenu *this,int32_t previousStartElement,int32_t amountOfElements,
               int32_t newStartElement,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  iVar1 = amountOfElements + previousStartElement;
  do {
    if (iVar1 <= previousStartElement) {
      return;
    }
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Count__
                     );
      cRam_? = '\x01';
    }
    if (-1 < previousStartElement) {
      pLVar2 = (this->fields).SelectionElementsList;
      if (pLVar2 == (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
code_?:
        func_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((previousStartElement < (pLVar2->fields)._size) &&
         ((previousStartElement < newStartElement ||
          ((this->fields).maxSelectionElementsOnScreen + newStartElement < previousStartElement))))
      {
        this_00 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             (this->fields).SelectionElementsList,previousStartElement,
                             MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                            );
        if (this_00 == (RegexCharClass_SingleRange)0x0) goto code_?;
        DefaultSpawnRoleSelectionElement::DefaultSpawnRoleSelectionElement_Deactivate
                  ((DefaultSpawnRoleSelectionElement *)this_00,(MethodInfo *)0x0);
      }
    }
    previousStartElement = previousStartElement + 1;
  } while( true );
}


/* Void Initialize(MVTeam) */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_Initialize
               (SpawnRoleMenu *this,MVTeam__Enum team,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffff60;
  puVar6 = &stack0xfffffffc;
  puVar7 = &stack0xffffff60;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                   );
    func_?(&TypeInfo__ISpawnRolePreviewObject);
    func_?(&TypeInfo__UnityEngine__UI__LayoutRebuilder);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__Add_ISpawnRolePreviewObject_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__List__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__get_Count__
                   );
    in_stack_8 = &TypeInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>;
    func_?();
    func_?(&TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
    cRam_? = '\x01';
    puVar6 = puStack_1;
    puVar7 = puStack_5;
  }
  puStack_5 = puVar7;
  puStack_1 = puVar6;
  pDVar9 = (this->fields).dragInputReciever;
  (this->fields).shownTeam = team;
  if (pDVar9 != (DragInputHandler *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<IDragInputReciever>__Add_IDragInputReciever_
                     );
      cRam_? = '\x01';
    }
    pLVar10 = (List_1_System_Object_ *)(pDVar9->fields).dragInputRecievers;
    if (pLVar10 != (List_1_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                (pLVar10,(Object *)this,
                 MethodInfo__System__Collections__Generic__List<IDragInputReciever>__Add_IDragInputReciever_
                );
      this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (this_02 != (MainCameraManager *)0x0) {
        MainCameraManager::MainCameraManager_set_CamMaskMode
                  (this_02,MaskMode__Enum_SkyBoxOnly,(MethodInfo *)0x0);
        pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar11 != (MVNetworkGame *)0x0) {
          this_03 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar11,(MethodInfo *)0x0);
          if (this_03 != (MVWorldObjectClientManager *)0x0) {
            RStack_12 = (RegexCharClass_SingleRange)
                        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                                  (this_03,WorldObjectType__Enum_AvatarSpawnRoleCreator,
                                   (MethodInfo *)0x0);
            pLVar10 = (List_1_System_Object_ *)func_?();
            pLStack_13 = pLVar10;
            mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
            __Il2CppFullySharedGenericType]::
            LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                      ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar10
                       ,
                       MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__List__
                      );
            pLStack_14 = pLVar10;
            pLVar15 = (List_1_MVWorldObjectClient_ *)func_?();
            pLStack_16 = pLVar15;
            mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
            __Il2CppFullySharedGenericType]::
            LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                      ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar15
                       ,MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__)
            ;
            pLStack_17 = pLVar15;
            if (RStack_12 != (RegexCharClass_SingleRange)0x0) {
              pLVar18 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                        RegularExpressions::RegexCharClass+SingleRange]::
                        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                                  ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                    *)&pLStack_19,
                                   (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                    *)RStack_12,
                                   MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                                  );
              puStack_20 = &stack0xffffff80;
              uStack_21 = 0;
              RVar22 = pLVar18->_current;
              uStack_2 = 1;
              while( true ) {
                bVar23 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                        Object]::List_1_T_Enumerator_System_Object__MoveNext
                                  ((List_1_T_Enumerator_System_Object_ *)&stack0xffffff80,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                                  );
                if (bVar23 == 0) break;
                pIStack_24 = TypeInfo__ISpawnRolePreviewObject;
                RStack_12 = RVar22;
                if (RVar22 == (RegexCharClass_SingleRange)0x0) goto code_?;
                item = (ISpawnRolePreviewObject__Class *)
                       func_?(RVar22,TypeInfo__ISpawnRolePreviewObject);
                if (item == (ISpawnRolePreviewObject__Class *)0x0) goto code_?;
                pIStack_25 = (item->_0).image;
                uVar26 = 0;
                pIStack_24 = (ISpawnRolePreviewObject__Class *)0x0;
                if (*(short *)((int)&pIStack_25[4].nameNoExt + 2) != 0) {
                  do {
                    pIStack_24 = item;
                    if (*(ISpawnRolePreviewObject__Class **)(pIStack_25[2].name + (uint)uVar26 * 8)
                        == TypeInfo__ISpawnRolePreviewObject) {
                      pp_Var13 = &pIStack_25[4].metadataHandle +
                                 *(int *)(pIStack_25[2].name + (uint)uVar26 * 8 + 4) * 2;
                      goto code_?;
                    }
                    uVar26 = uVar26 + 1;
                  } while (uVar26 < *(ushort *)((int)&pIStack_25[4].nameNoExt + 2));
                }
                pp_Var13 = (Il2CppMetadataImageHandle *)
                           func_?(item,TypeInfo__ISpawnRolePreviewObject,1);
code_?:
                iVar27 = (*(code *)*pp_Var13)(item,(Il2CppNameToTypeHandleHashTable *)pp_Var13[1]);
                if ((iVar27 == 5) ||
                   (iVar27 = func_?(1,TypeInfo__ISpawnRolePreviewObject,item),
                   pLVar10 = pLStack_13, iVar27 == (this->fields).shownTeam)) {
                  pLVar10 = pLStack_13;
                  if ((pLStack_13 == (List_1_System_Object_ *)0x0) ||
                     (mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                      List_1_System_Object__Add
                                (pLStack_13,(Object *)item,
                                 MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__Add_ISpawnRolePreviewObject_
                                ), pLStack_16 == (List_1_MVWorldObjectClient_ *)0x0))
                  goto code_?;
                  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__Add
                            ((List_1_System_Object_ *)pLStack_16,(Object *)RStack_12,
                             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                            );
                }
              }
              uStack_2 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        ((Object *)&stack0xffffff80,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                         ,(MethodInfo *)in_stack_8);
              pLVar15 = pLStack_16;
              uStack_2 = 0xffffffff;
              pLStack_16 = (List_1_MVWorldObjectClient_ *)
                           SpawnRoleMenu_GetSortedList
                                     (this,(List_1_ISpawnRolePreviewObject_ *)pLVar10,
                                      (MethodInfo *)0x0);
              pLStack_17 = SpawnRoleMenu_GetSortedWorldObjectList
                                     (this,pLVar15,(List_1_ISpawnRolePreviewObject_ *)pLStack_13,
                                      (MethodInfo *)0x0);
              pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar11 != (MVNetworkGame *)0x0) &&
                 (this_00 = (pMVar11->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
                bStack_28 = MVTeamManager::MVTeamManager_TeamHasSpawnPoints
                                      (this_00,(this->fields).shownTeam,(MethodInfo *)0x0);
                pLStack_14 = (List_1_System_Object_ *)(uint)bStack_28;
                iVar27 = 0;
                if (pLStack_16 != (List_1_MVWorldObjectClient_ *)0x0) {
                  for (; iVar27 < (pLStack_16->fields)._size; iVar27 = iVar27 + 1) {
                    SpawnRoleMenu_CreateSpawnRoleSelectionElement
                              (this,(int32_t)pLStack_14,iVar27,
                               (List_1_ISpawnRolePreviewObject_ *)pLStack_16,pLStack_17,
                               (MethodInfo *)0x0);
                  }
                  if (bStack_28 != 0) {
                    SpawnRoleMenu_CreateDefaultAvatarElement(this,(MethodInfo *)0x0);
                  }
                  pRVar29 = (this->fields).elementContainer;
                  if ((TypeInfo__UnityEngine__UI__LayoutRebuilder->_1).cctor_finished_or_no_cctor ==
                      0) {
                    func_?(TypeInfo__UnityEngine__UI__LayoutRebuilder);
                  }
                  UnityEngine.UI.dll::UnityEngine::UI::LayoutRebuilder::
                  LayoutRebuilder_ForceRebuildLayoutImmediate(pRVar29,(MethodInfo *)0x0);
                  pRVar29 = (this->fields).elementContainer;
                  if (pRVar29 != (RectTransform *)0x0) {
                    pRVar30 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                              RectTransform_get_rect((Rect *)&pLStack_19,pRVar29,(MethodInfo *)0x0);
                    (this->fields).menuHalfWidth = pRVar30->m_Width * _UNK_?;
                    SpawnRoleMenu_OnSpawnRoleSelected(this,0,(MethodInfo *)0x0);
                    this_01 = (Transform *)(this->fields).elementContainer;
                    if (this_01 != (Transform *)0x0) {
                      pLStack_19 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                    *)(this->fields).interpolateToPositionX;
                      puStack_31 = (undefined *)0x0;
                      pVVar32 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_get_localPosition(&VStack_33,this_01,(MethodInfo *)0x0);
                      puStack_20 = (undefined1 *)0x0;
                      value.y = pVVar32->y;
                      value.x = (float)pLStack_19;
                      value.z = 0.0;
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::
                      Transform_set_localPosition(this_01,value,(MethodInfo *)0x0);
                      pLVar34 = (this->fields).SelectionElementsList;
                      if (pLVar34 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
                        SpawnRoleMenu_HideElements
                                  (this,0,(pLVar34->fields)._size,0,(MethodInfo *)0x0);
                        SpawnRoleMenu_ShowElements(this,0,(MethodInfo *)0x0);
                        *unaff_FS_OFFSET = uStack_4;
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
  }
code_?:
  func_?();
code_?:
  uVar35 = func_?(RStack_12,pIStack_24);
  func_?(uVar35);
  pcVar36 = (code *)swi(3);
  (*pcVar36)();
  return;
}


/* Boolean IsIndexWithinBounds(Int32) */

bool Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_IsIndexWithinBounds
               (SpawnRoleMenu *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &
                 MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Count__
    ;
    func_?();
    cRam_? = '\x01';
  }
  if (index < 0) {
    return 0;
  }
  pLVar2 = (this->fields).SelectionElementsList;
  if (pLVar2 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
    return index < (pLVar2->fields)._size;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void LateUpdate() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_LateUpdate
               (SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  MVInputWrapper::MVInputWrapper_SuppressShortcutKeys((MethodInfo *)0x0);
  return;
}


/* Void LockedButtonPressed() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_LockedButtonPressed
               (SpawnRoleMenu *this,MethodInfo *method)

{
  this_01 = this;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode == 0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?(&
                        UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                       );
        func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        func_?(&TypeInfo__GamePassesManager);
        func_?(&
                        MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                       );
        func_?(&
                        TierTestDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierTestDetailsPopup>_TierTestDetailsPopup_
                       );
        func_?(&TypeInfo__UnityEngine__Object);
        func_?(&
                        MethodInfo__SpawnRoleMenu____c__DisplayClass58_0___ShowTestTier_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       );
        func_?(&TypeInfo__SpawnRoleMenu____c__DisplayClass58_0);
        cRam_? = '\x01';
      }
      method_01 = TypeInfo__SpawnRoleMenu____c__DisplayClass58_0;
      pOVar2 = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (pOVar2,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
      pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).SelectionElementsList;
      if ((pLVar3 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
         (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar3,(this->fields).selectedSpawnRole,
                             MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                            ), RVar4 != (RegexCharClass_SingleRange)0x0)) {
        (**(code **)(*(int *)RVar4 + 0xf0))();
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pPVar5 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
        if (pPVar5 != (PlayerPlanetData *)0x0) {
          playerGamePoints = (pPVar5->fields).progressionGamePoints;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pPVar5 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
          if ((pPVar5 != (PlayerPlanetData *)0x0) &&
             (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
             this_00 != (PlayerTierStateCalculator *)0x0)) {
            this = (SpawnRoleMenu *)CONCAT31(this._1_3_,(pPVar5->fields).gamePassTier);
            this_03 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator
                      ::PlayerTierStateCalculator_GetTierPricingState
                                (this_00,playerGamePoints,(GamePassTier__Enum)this,(MethodInfo *)0x0
                                );
            if ((this_03 !=
                 (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                  *)0x0) &&
               (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          ByteEnum,System::Object]::
                          Dictionary_2_System_ByteEnum_System_Object__get_Item
                                    ((Dictionary_2_System_ByteEnum_System_Object_ *)this_03,
                                     (ByteEnum__Enum)this,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                    ), pOVar6 != (Object *)0x0)) {
              original_00 = (this_01->fields).tierTestPopupPrefab;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pOVar7 = (Object__Class *)
                       UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                 ((Object *)original_00,
                                  TierTestDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierTestDetailsPopup>_TierTestDetailsPopup_
                                 );
              if (pOVar2 != (Object *)0x0) {
                pOVar2[1].klass = pOVar7;
                pOVar6 = pOVar2 + 1;
                func_?();
                pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)this_01,(MethodInfo *)0x0);
                pEVar9 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          ((UnityAction_2_System_Object_System_Object_ *)pEVar9,pOVar2,
                           MethodInfo__SpawnRoleMenu____c__DisplayClass58_0___ShowTestTier_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                           ,(MethodInfo *)0x0);
                if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                }
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_ExecuteHierarchy
                          (pGVar8,(BaseEventData *)0x0,pEVar9,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                          );
                if (pOVar2[1].klass != (Object__Class *)0x0) {
                  TierTestDetailsPopup::TierTestDetailsPopup_Initialize
                            ((TierTestDetailsPopup *)pOVar2[1].klass,(GamePassTier__Enum)this,
                             (int32_t)pOVar6,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
    else {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        func_?(&
                        MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                       );
        func_?(&
                        TierLockedDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierLockedDetailsPopup>_TierLockedDetailsPopup_
                       );
        func_?(&TypeInfo__UnityEngine__Object);
        func_?(&MethodInfo__SpawnRoleMenu__OnPurchaseGamePassTier__);
        func_?(&
                        MethodInfo__SpawnRoleMenu____c__DisplayClass57_0___ShowLockedTierPurchase_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       );
        func_?(&TypeInfo__SpawnRoleMenu____c__DisplayClass57_0);
        func_?(&TypeInfo__UnityEngine__Events__UnityAction);
        cRam_? = '\x01';
      }
      method_00 = TypeInfo__SpawnRoleMenu____c__DisplayClass57_0;
      pOVar2 = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (pOVar2,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
      pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).SelectionElementsList;
      if ((pLVar3 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
         (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar3,(this->fields).selectedSpawnRole,
                             MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                            ), RVar4 != (RegexCharClass_SingleRange)0x0)) {
        (**(code **)(*(int *)RVar4 + 0xf0))();
        original = (this->fields).tierLockedPopupPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pOVar7 = (Object__Class *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)original,
                            TierLockedDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierLockedDetailsPopup>_TierLockedDetailsPopup_
                           );
        if (pOVar2 != (Object *)0x0) {
          pOVar2[1].klass = pOVar7;
          func_?();
          pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
          pEVar9 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)pEVar9,pOVar2,
                     MethodInfo__SpawnRoleMenu____c__DisplayClass57_0___ShowLockedTierPurchase_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar8,(BaseEventData *)0x0,pEVar9,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          pOVar7 = pOVar2[1].klass;
          this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?();
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (this_02,(Object *)this,MethodInfo__SpawnRoleMenu__OnPurchaseGamePassTier__,
                     (MethodInfo *)0x0);
          if (pOVar7 != (Object__Class *)0x0) {
            TierLockedDetailsPopup::TierLockedDetailsPopup_Initialize
                      ((TierLockedDetailsPopup *)pOVar7,(GamePassTier__Enum)this_02,
                       (UnityAction *)this_02,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  uVar10 = func_?(&stack0xfffffff0);
  func_?(uVar10);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnBeginDrag() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_OnBeginDrag
               (SpawnRoleMenu *this,MethodInfo *method)

{
  _Stack_8 = (_union_155)0xffffffff;
  _Stack_c.rgctx_data = (Il2CppRGCTXData *)&DAT_?;
  ppIStack_1 = (Il2CppType **)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &ppIStack_1;
  pIStack_2 = (Il2CppType *)&stack0xffffffbc;
  pIVar3 = (Il2CppType *)&stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<DefaultSpawnRoleSelectionElement>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<DefaultSpawnRoleSelectionElement>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<DefaultSpawnRoleSelectionElement>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__GetEnumerator__
                   );
    cRam_? = '\x01';
    pIVar3 = pIStack_2;
  }
  pIStack_2 = pIVar3;
  LStack_4._list = (List_1_System_Object_ *)0x0;
  LStack_4._index = 0;
  LStack_4._version = 0;
  LStack_4._current = (Object *)0x0;
  this_00 = (Transform *)(this->fields).elementContainer;
  (this->fields).shouldInterpolate = 0;
  if (this_00 != (Transform *)0x0) {
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       (&VStack_6,this_00,(MethodInfo *)0x0);
    this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).SelectionElementsList;
    (this->fields).dragStartPositionX = pVVar5->x;
    if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      method_00 = (MethodInfo *)&stack0xffffffd8;
      pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                           *)method_00,this_01,
                          MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__GetEnumerator__
                         );
      LStack_4._list = (List_1_System_Object_ *)pLVar7->_list;
      LStack_4._index = pLVar7->_index;
      LStack_4._version = pLVar7->_version;
      LStack_4._current = *(Object **)&pLVar7->_current;
      VStack_6.y = 0.0;
      _Stack_8 = (_union_155)0x1;
      VStack_6.z = (float)&LStack_4;
      while( true ) {
        bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_4,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<DefaultSpawnRoleSelectionElement>__MoveNext__
                          );
        if (bVar8 == 0) {
          _Stack_8 = (_union_155)0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&LStack_4,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<DefaultSpawnRoleSelectionElement>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = ppIStack_1;
          return;
        }
        if ((RegexCharClass_SingleRange)LStack_4._current == (RegexCharClass_SingleRange)0x0)
        break;
        *(undefined1 *)((int)LStack_4._current + 0x3c) = 1;
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_OnDestroy
               (SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int>);
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&MethodInfo__SpawnRoleMenu__Close_int_);
    func_?(&MethodInfo__SpawnRoleMenu__OnPlayerPlanetDataUpdated__);
    cRam_? = '\x01';
  }
  LobbyFlowMenu::LobbyFlowMenu_OnDestroy((LobbyFlowMenu *)this,(MethodInfo *)0x0);
  pAVar1 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
  this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_01,(Object *)this,MethodInfo__SpawnRoleMenu__OnPlayerPlanetDataUpdated__,
             (MethodInfo *)0x0);
  pAVar1 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)this_01,(MethodInfo *)0x0);
  if (pAVar1 == (Action *)0x0) {
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
code_?:
    func_?();
    if ((this->fields).awaitingSpawn == 0) {
      return;
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pMVar2 != (MVLocalPlayer *)0x0) {
      this_00 = (pMVar2->fields)._.spawnRolesManager;
      this_02 = (UnityAction_1_System_Int32Enum_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_02,(Object *)this,MethodInfo__SpawnRoleMenu__Close_int_,(MethodInfo *)0x0);
      if (this_00 != (SpawnRolesManager *)0x0) {
        SpawnRolesManager::SpawnRolesManager_remove_OnSpawnRoleActivated
                  (this_00,(Action_1_Int32_ *)this_02,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    pAVar3 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar3 = pAVar1;
    }
    if (pAVar3 != (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar3;
      pAVar3 = (Action *)0x0;
      if (pAVar1->klass == TypeInfo__System__Action) {
        pAVar3 = pAVar1;
      }
      if (pAVar3 == (Action *)0x0) goto code_?;
      goto code_?;
    }
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDrag() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_OnDrag
               (SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  index = SpawnRoleMenu_CalculateNewSelectedItem(this,(MethodInfo *)0x0);
  if (index == (this->fields).selectedSpawnRole) {
    return;
  }
  pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).SelectionElementsList;
  if ((pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
     (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar1,(this->fields).selectedSpawnRole,
                         MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                        ), RVar2 != (RegexCharClass_SingleRange)0x0)) {
    (**(code **)(*(int *)RVar2 + 0x118))();
    pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields).SelectionElementsList;
    (this->fields).selectedSpawnRole = index;
    if ((pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
       (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (pLVar1,index,
                           MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                          ), RVar2 != (RegexCharClass_SingleRange)0x0)) {
      (**(code **)(*(int *)RVar2 + 0x108))(RVar2,*(undefined4 *)(*(int *)RVar2 + 0x10c));
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnEndDrag() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_OnEndDrag
               (SpawnRoleMenu *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<DefaultSpawnRoleSelectionElement>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<DefaultSpawnRoleSelectionElement>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<DefaultSpawnRoleSelectionElement>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  newSelectedSpawnRole = SpawnRoleMenu_CalculateNewSelectedItem(this,(MethodInfo *)0x0);
  SpawnRoleMenu_OnSpawnRoleSelected(this,newSelectedSpawnRole,(MethodInfo *)0x0);
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).SelectionElementsList;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
    RegexCharClass+SingleRange]::
    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
              ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               &stack0xffffffd8,this_00,
               MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__GetEnumerator__
              );
    uStack_1 = 1;
    method_00 = (RegexCharClass_SingleRange)&stack0xffffffc8;
    while( true ) {
      this_01 = (List_1_T_Enumerator_System_Object_ *)&stack0xffffffc8;
      bVar4 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (this_01,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<DefaultSpawnRoleSelectionElement>__MoveNext__
                        );
      if (bVar4 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&stack0xffffffc8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<DefaultSpawnRoleSelectionElement>__Dispose__
                   ,(MethodInfo *)method_00);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (this_01 == (List_1_T_Enumerator_System_Object_ *)0x0) break;
      *(undefined1 *)&this_01[3]._current = 0;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnPlayerPlanetDataUpdated() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_OnPlayerPlanetDataUpdated
               (SpawnRoleMenu *this,MethodInfo *method)

{
  pSVar1 = this;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffffbc;
  puVar6 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<DefaultSpawnRoleSelectionElement>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<DefaultSpawnRoleSelectionElement>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<DefaultSpawnRoleSelectionElement>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                   );
    cRam_? = '\x01';
    puVar6 = puStack_5;
  }
  puStack_5 = puVar6;
  LStack_7._list = (List_1_System_Object_ *)0x0;
  LStack_7._index = 0;
  LStack_7._version = 0;
  LStack_7._current = (Object *)0x0;
  pLVar8 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).SelectionElementsList;
  this_00 = (this->fields).buttonController;
  if (pLVar8 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    RVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (pLVar8,(this->fields).selectedSpawnRole,
                       MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                      );
    if (RVar9 != (RegexCharClass_SingleRange)0x0) {
      method_00 = (MethodInfo *)&UNK_?;
      uVar10 = (**(code **)(*(int *)RVar9 + 0xf0))();
      this = (SpawnRoleMenu *)CONCAT31(this._1_3_,uVar10);
      if (this_00 != (SpawnRoleSelectionButtonController *)0x0) {
        SpawnRoleSelectionButtonController::
        SpawnRoleSelectionButtonController_OnNewSelectedSpawnRole
                  (this_00,(GamePassTier__Enum)this,(MethodInfo *)0x0);
        pLVar8 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (pSVar1->fields).SelectionElementsList;
        if (pLVar8 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
          pLVar11 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                             (&LStack_12,pLVar8,
                              MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__GetEnumerator__
                             );
          LStack_7._list = (List_1_System_Object_ *)pLVar11->_list;
          LStack_7._index = pLVar11->_index;
          LStack_7._version = pLVar11->_version;
          LStack_7._current = *(Object **)&pLVar11->_current;
          LStack_12._version = 0;
          uStack_2 = 1;
          LStack_12._current = (RegexCharClass_SingleRange)&LStack_7;
          while( true ) {
            bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              (&LStack_7,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<DefaultSpawnRoleSelectionElement>__MoveNext__
                              );
            if (bVar13 == 0) {
              uStack_2 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        ((Object *)&LStack_7,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<DefaultSpawnRoleSelectionElement>__Dispose__
                         ,method_00);
              *unaff_FS_OFFSET = uStack_4;
              return;
            }
            if ((RegexCharClass_SingleRange)LStack_7._current == (RegexCharClass_SingleRange)0x0)
            break;
            (**(code **)(*(int *)LStack_7._current + 0x120))
                      (LStack_7._current,*(undefined4 *)(*(int *)LStack_7._current + 0x124));
          }
        }
      }
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void OnPurchaseGamePassTier() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_OnPurchaseGamePassTier
               (SpawnRoleMenu *this,MethodInfo *method)

{
  pSVar1 = this;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffffbc;
  puVar6 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<DefaultSpawnRoleSelectionElement>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<DefaultSpawnRoleSelectionElement>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<DefaultSpawnRoleSelectionElement>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                   );
    cRam_? = '\x01';
    puVar6 = puStack_5;
  }
  puStack_5 = puVar6;
  LStack_7._list = (List_1_System_Object_ *)0x0;
  LStack_7._index = 0;
  LStack_7._version = 0;
  LStack_7._current = (Object *)0x0;
  pLVar8 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).SelectionElementsList;
  this_00 = (this->fields).buttonController;
  if (pLVar8 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    RVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (pLVar8,(this->fields).selectedSpawnRole,
                       MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                      );
    if (RVar9 != (RegexCharClass_SingleRange)0x0) {
      method_00 = (MethodInfo *)&UNK_?;
      uVar10 = (**(code **)(*(int *)RVar9 + 0xf0))();
      this = (SpawnRoleMenu *)CONCAT31(this._1_3_,uVar10);
      if (this_00 != (SpawnRoleSelectionButtonController *)0x0) {
        SpawnRoleSelectionButtonController::
        SpawnRoleSelectionButtonController_OnNewSelectedSpawnRole
                  (this_00,(GamePassTier__Enum)this,(MethodInfo *)0x0);
        pLVar8 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (pSVar1->fields).SelectionElementsList;
        if (pLVar8 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
          pLVar11 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                             (&LStack_12,pLVar8,
                              MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__GetEnumerator__
                             );
          LStack_7._list = (List_1_System_Object_ *)pLVar11->_list;
          LStack_7._index = pLVar11->_index;
          LStack_7._version = pLVar11->_version;
          LStack_7._current = *(Object **)&pLVar11->_current;
          LStack_12._version = 0;
          uStack_2 = 1;
          LStack_12._current = (RegexCharClass_SingleRange)&LStack_7;
          while( true ) {
            bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              (&LStack_7,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<DefaultSpawnRoleSelectionElement>__MoveNext__
                              );
            if (bVar13 == 0) {
              uStack_2 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        ((Object *)&LStack_7,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<DefaultSpawnRoleSelectionElement>__Dispose__
                         ,method_00);
              *unaff_FS_OFFSET = uStack_4;
              return;
            }
            if ((RegexCharClass_SingleRange)LStack_7._current == (RegexCharClass_SingleRange)0x0)
            break;
            (**(code **)(*(int *)LStack_7._current + 0x120))
                      (LStack_7._current,*(undefined4 *)(*(int *)LStack_7._current + 0x124));
          }
        }
      }
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void OnScrollValueChange() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_OnScrollValueChange
               (SpawnRoleMenu *this,MethodInfo *method)

{
  pSVar1 = (this->fields).scrollbar;
  if (pSVar1 != (Scrollbar *)0x0) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_isActiveAndEnabled
                      ((Behaviour *)pSVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    pSVar1 = (this->fields).scrollbar;
    if (pSVar1 != (Scrollbar *)0x0) {
      fVar3 = UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_get_value
                        (pSVar1,(MethodInfo *)0x0);
      if (fVar3 < _UNK_?) {
        return;
      }
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Count__
                       );
        cRam_? = '\x01';
      }
      pSVar1 = (this->fields).scrollbar;
      if (pSVar1 != (Scrollbar *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_get_value
                  (pSVar1,(MethodInfo *)0x0);
        pLVar4 = (this->fields).SelectionElementsList;
        if (pLVar4 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
          iVar5 = (pLVar4->fields)._size;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__System__Math);
            cRam_? = '\x01';
          }
          if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Math);
          }
          cVar6 = cRam_?;
          fVar7 = (float10)func_?((double)((float)iVar5 * unaff_EBX));
          fVar3 = (float)(this->fields).maxSelectionElementsOnScreen * _UNK_?;
          if (cVar6 == '\0') {
            func_?(&TypeInfo__System__Math);
            cRam_? = '\x01';
          }
          if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Math);
          }
          fVar7 = (float10)func_?((double)((float)(int)fVar7 - fVar3));
          pLVar4 = (this->fields).SelectionElementsList;
          if (pLVar4 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
            SpawnRoleMenu_HideElements
                      (this,(this->fields).currentSelectionStartIndex,(pLVar4->fields)._size,
                       (int)fVar7,(MethodInfo *)0x0);
            SpawnRoleMenu_ShowElements(this,(int)fVar7,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnSelectButtonPressed() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_OnSelectButtonPressed
               (SpawnRoleMenu *this,MethodInfo *method)

{
  this_04 = this;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                   );
    func_?(&TypeInfo__SpawnRoleMenu);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Equality_int__MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).SelectionElementsList;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,(this->fields).selectedSpawnRole,
                       MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                      );
    if (RVar1 != (RegexCharClass_SingleRange)0x0) {
      b = *(int *)((int)RVar1 + 0x28);
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if ((pMVar2 != (MVLocalPlayer *)0x0) &&
         (pSVar3 = (pMVar2->fields).spawnRoleDataMediator, pSVar3 != (SpawnRoleDataMediator *)0x0))
      {
        Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
        SpawnRoleVariable`1[System::Int32]::SpawnRoleVariable_1_System_Int32__op_Equality
                  (b,(SpawnRoleVariable_1_System_Int32_ *)(pSVar3->fields).woId,
                   MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Equality_int__MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                  );
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar4 != (MVNetworkGame *)0x0) &&
           (this_01 = (pMVar4->fields).teamManager, this_01 != (MVTeamManager *)0x0)) {
          iVar5 = MVTeamManager::MVTeamManager_TeamCount(this_01,(MethodInfo *)0x0);
          if (1 < iVar5) {
            iVar6 = (this->fields).shownTeam;
            pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
            pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0);
            if (pMVar2 == (MVLocalPlayer *)0x0) goto code_?;
            if (iVar6 != (pMVar2->fields)._._Team_k__BackingField) {
              this_05 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                  ((MethodInfo *)0x0);
              if (this_05 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
              MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTeam
                        (this_05,(this->fields).shownTeam,(MethodInfo *)0x0);
              pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
              this_02 = (pMVar4->fields).gameStatCounterManager;
              pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
              pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0);
              if (pMVar2 == (MVLocalPlayer *)0x0) goto code_?;
              iVar5 = (pMVar2->fields)._._ActorNr_k__BackingField;
              pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
              pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0);
              if ((pMVar2 == (MVLocalPlayer *)0x0) || (this_02 == (GameStatCounterManager *)0x0))
              goto code_?;
              MVWorldObject.dll::GameStatCounterManager::
              GameStatCounterManager_RemoveTeamScoreOnActorLeave
                        (this_02,iVar5,(pMVar2->fields)._._Team_k__BackingField,(MethodInfo *)0x0);
              pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
              pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0);
              if (pMVar2 == (MVLocalPlayer *)0x0) goto code_?;
              mscorlib.dll::System::Collections::Generic::Stack`1[T]+Enumerator[System::Dynamic::
              BindingRestrictions+TestBuilder+AndNode]::
              Stack_1_T_Enumerator_System_Dynamic_BindingRestrictions_TestBuilder_AndNode__Dispose
                        ((Stack_1_T_Enumerator_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_
                          *)pMVar2,(MethodInfo *)0x0);
              pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
              pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0);
              if (pMVar2 == (MVLocalPlayer *)0x0) goto code_?;
              (pMVar2->fields)._._Team_k__BackingField = (this->fields).shownTeam;
            }
          }
          this._3_1_ = (char)((uint)this_01 >> 0x18);
          if (this._3_1_ == '\0') {
            if (cRam_? == '\0') {
              func_?(&TypeInfo__System__Action<int>);
              func_?(&MethodInfo__SpawnRoleMenu__Close_int_);
              cRam_? = '\x01';
            }
            (this_04->fields).awaitingSpawn = 1;
            pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
            if (pMVar2 != (MVLocalPlayer *)0x0) {
              this_03 = (pMVar2->fields)._.spawnRolesManager;
              this_06 = (UnityAction_1_System_Int32Enum_ *)
                        func_?(TypeInfo__System__Action<int>);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
              UnityAction_1_System_Int32Enum___ctor
                        (this_06,(Object *)this_04,MethodInfo__SpawnRoleMenu__Close_int_,
                         (MethodInfo *)0x0);
              if (this_03 != (SpawnRolesManager *)0x0) {
                SpawnRolesManager::SpawnRolesManager_add_OnSpawnRoleActivated
                          (this_03,(Action_1_Int32_ *)this_06,(MethodInfo *)0x0);
                pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer
                                   ((MethodInfo *)0x0);
                if (pMVar2 != (MVLocalPlayer *)0x0) {
                  iVar5 = MVLocalPlayer::MVLocalPlayer_get_DefaultSpawnRoleId
                                    (pMVar2,(MethodInfo *)0x0);
                  if (b == iVar5) {
                    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                    if (pMVar4 != (MVNetworkGame *)0x0) {
                      pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                         (pMVar4,(MethodInfo *)0x0);
                      if (pMVar2 != (MVLocalPlayer *)0x0) {
                        MVLocalPlayer::MVLocalPlayer_SetActiveSpawnRole(pMVar2,b,(MethodInfo *)0x0);
                        if (TypeInfo__SpawnRoleMenu->static_fields->OnNewSpawnRoleSelected !=
                            (Action_1_Int32_ *)0x0) {
                          pAVar7 = TypeInfo__SpawnRoleMenu->static_fields->OnNewSpawnRoleSelected;
                          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer
                                             ((MethodInfo *)0x0);
                          if (pMVar2 == (MVLocalPlayer *)0x0) goto code_?;
                          iVar5 = MVLocalPlayer::MVLocalPlayer_get_DefaultSpawnRoleId
                                            (pMVar2,(MethodInfo *)0x0);
                          (*(pAVar7->fields)._._.invoke_impl)
                                    ((pAVar7->fields)._._.method_code,iVar5,
                                     (pAVar7->fields)._._.method);
                        }
code_?:
                        if (cRam_? == '\0') {
                          func_?(&TypeInfo__FirstTimePressPlayController);
                          cRam_? = '\x01';
                        }
                        if (TypeInfo__FirstTimePressPlayController->static_fields->haveBeenPressed
                            == 0) {
                          FirstTimePressPlayController::
                          FirstTimePressPlayController_OnFirstTimePlayIsPressed((MethodInfo *)0x0);
                        }
                        MVGameControllerDesktop::MVGameControllerDesktop_CursorLock
                                  (1,1,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                  else {
                    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                    if (pMVar4 != (MVNetworkGame *)0x0) {
                      pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                         (pMVar4,(MethodInfo *)0x0);
                      if (pMVar2 != (MVLocalPlayer *)0x0) {
                        MVLocalPlayer::MVLocalPlayer_CreateSpawnRole(pMVar2,b,(MethodInfo *)0x0);
                        if (TypeInfo__SpawnRoleMenu->static_fields->OnNewSpawnRoleSelected !=
                            (Action_1_Int32_ *)0x0) {
                          pAVar7 = TypeInfo__SpawnRoleMenu->static_fields->OnNewSpawnRoleSelected;
                          (*(pAVar7->fields)._._.invoke_impl)
                                    ((pAVar7->fields)._._.method_code,b,(pAVar7->fields)._._.method)
                          ;
                        }
                        goto code_?;
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            if (cRam_? == '\0') {
              func_?(&
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
              func_?(&
                              UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                             );
              func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
              func_?(&
                              MethodInfo__SpawnRoleMenu____c___Close_b__62_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                             );
              func_?(&TypeInfo__SpawnRoleMenu____c);
              cRam_? = '\x01';
            }
            root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_04,(MethodInfo *)0x0);
            if ((TypeInfo__SpawnRoleMenu____c->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__SpawnRoleMenu____c);
            }
            callbackFunction = TypeInfo__SpawnRoleMenu____c->static_fields->__9__62_0;
            if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
              if ((TypeInfo__SpawnRoleMenu____c->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__SpawnRoleMenu____c);
              }
              object = TypeInfo__SpawnRoleMenu____c->static_fields->__9;
              callbackFunction =
                   (ExecuteEvents_EventFunction_1_IUIStack_ *)
                   func_?(
                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                  );
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                         (Object *)object,
                         MethodInfo__SpawnRoleMenu____c___Close_b__62_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              TypeInfo__SpawnRoleMenu____c->static_fields->__9__62_0 = callbackFunction;
              func_?(&TypeInfo__SpawnRoleMenu____c->static_fields->__9__62_0,
                              callbackFunction);
            }
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (root,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            this_07 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                ((MethodInfo *)0x0);
            if (this_07 != (MainCameraManager *)0x0) {
              MainCameraManager::MainCameraManager_set_CamMaskMode
                        (this_07,MaskMode__Enum_Default,(MethodInfo *)0x0);
              (*(code *)(this_04->klass->vtable).StartPlaying.method)
                        (this_04,(this_04->klass->vtable).OnBeginDrag.methodPtr);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnSpawnRoleActivated(Int32) */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_OnSpawnRoleActivated
               (SpawnRoleMenu *this,int32_t newSelectedSpawnRole,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).SelectionElementsList;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,(this->fields).selectedSpawnRole,
                       MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                      );
    if (RVar1 != (RegexCharClass_SingleRange)0x0) {
      bVar2 = (**(code **)(*(int *)RVar1 + 0xf0))(RVar1,*(undefined4 *)(*(int *)RVar1 + 0xf4));
      if (cRam_? == '\0') {
        func_?(&TypeInfo__GamePassesManager);
        cRam_? = '\x01';
      }
      pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar3 != (PlayerPlanetData *)0x0) {
        bVar4 = (pPVar3->fields).gamePassTier;
        if (bVar2 <= bVar4) {
          SpawnRoleMenu_OnSelectButtonPressed(this,(MethodInfo *)0x0);
          return;
        }
        if (bVar2 == (byte)(bVar4 + 1)) {
          if (cRam_? == '\0') {
            func_?(&TypeInfo__MVGameControllerBase);
            cRam_? = '\x01';
          }
          pGVar5 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
          if (pGVar5 == (GameSessionData *)0x0) goto code_?;
          if ((pGVar5->fields).gameMode != 0) {
            SpawnRoleMenu_ShowTierPurchase(this,(MethodInfo *)0x0);
            return;
          }
        }
        else {
          if (cRam_? == '\0') {
            func_?(&TypeInfo__MVGameControllerBase);
            cRam_? = '\x01';
          }
          pGVar5 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
          if (pGVar5 == (GameSessionData *)0x0) goto code_?;
          if ((pGVar5->fields).gameMode != 0) {
            SpawnRoleMenu_ShowLockedTierPurchase(this,(MethodInfo *)0x0);
            return;
          }
        }
        SpawnRoleMenu_ShowTestTier(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnSpawnRoleSelected(Int32) */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_OnSpawnRoleSelected
               (SpawnRoleMenu *this,int32_t newSelectedSpawnRole,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).SelectionElementsList;
  if (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (pLVar1,(this->fields).selectedSpawnRole,
                       MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                      );
    if (RVar2 != (RegexCharClass_SingleRange)0x0) {
      (**(code **)(*(int *)RVar2 + 0x118))(RVar2,*(undefined4 *)(*(int *)RVar2 + 0x11c));
      pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).SelectionElementsList;
      (this->fields).selectedSpawnRole = newSelectedSpawnRole;
      if (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (pLVar1,newSelectedSpawnRole,
                           MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                          );
        if (RVar2 != (RegexCharClass_SingleRange)0x0) {
          (**(code **)(*(int *)RVar2 + 0x110))(RVar2,*(undefined4 *)(*(int *)RVar2 + 0x114));
          iVar3 = (this->fields).selectedSpawnRole;
          (this->fields).interpolateToPositionX =
               (this->fields).menuHalfWidth -
               ((float)(iVar3 + 1) * (this->fields).elementSpacing +
                (float)iVar3 * (this->fields).selectionElementWidth +
               (this->fields).selectionElementWidth * _UNK_?);
          fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
          pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   (this->fields).SelectionElementsList;
          this_00 = (this->fields).buttonController;
          (this->fields).shouldInterpolate = 1;
          (this->fields).interpolationStartTime = fVar4;
          if (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
            RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (pLVar1,(this->fields).selectedSpawnRole,
                               MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                              );
            if (RVar2 != (RegexCharClass_SingleRange)0x0) {
              uVar5 = (**(code **)(*(int *)RVar2 + 0xf0))
                                (RVar2,*(undefined4 *)(*(int *)RVar2 + 0xf4));
              this = (SpawnRoleMenu *)CONCAT31(this._1_3_,uVar5);
              if (this_00 != (SpawnRoleSelectionButtonController *)0x0) {
                SpawnRoleSelectionButtonController::
                SpawnRoleSelectionButtonController_OnNewSelectedSpawnRole
                          (this_00,(GamePassTier__Enum)this,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OpenTierShopButtonPressed() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_OpenTierShopButtonPressed
               (SpawnRoleMenu *this,MethodInfo *method)

{
  this_00 = this;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode == 0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?(&
                        UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                       );
        func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        func_?(&TypeInfo__GamePassesManager);
        func_?(&
                        MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                       );
        func_?(&
                        TierTestDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierTestDetailsPopup>_TierTestDetailsPopup_
                       );
        func_?(&TypeInfo__UnityEngine__Object);
        func_?(&
                        MethodInfo__SpawnRoleMenu____c__DisplayClass58_0___ShowTestTier_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       );
        func_?(&TypeInfo__SpawnRoleMenu____c__DisplayClass58_0);
        cRam_? = '\x01';
      }
      method_00 = TypeInfo__SpawnRoleMenu____c__DisplayClass58_0;
      pOVar2 = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (pOVar2,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
      pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).SelectionElementsList;
      if ((pLVar3 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
         (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar3,(this->fields).selectedSpawnRole,
                             MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                            ), RVar4 != (RegexCharClass_SingleRange)0x0)) {
        (**(code **)(*(int *)RVar4 + 0xf0))();
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pPVar5 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
        if (pPVar5 != (PlayerPlanetData *)0x0) {
          iVar6 = (pPVar5->fields).progressionGamePoints;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pPVar5 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
          if ((pPVar5 != (PlayerPlanetData *)0x0) &&
             (pPVar7 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
             pPVar7 != (PlayerTierStateCalculator *)0x0)) {
            this = (SpawnRoleMenu *)CONCAT31(this._1_3_,(pPVar5->fields).gamePassTier);
            pDVar8 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator
                      ::PlayerTierStateCalculator_GetTierPricingState
                                (pPVar7,iVar6,(GamePassTier__Enum)this,(MethodInfo *)0x0);
            if ((pDVar8 !=
                 (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                  *)0x0) &&
               (pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          ByteEnum,System::Object]::
                          Dictionary_2_System_ByteEnum_System_Object__get_Item
                                    ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar8,
                                     (ByteEnum__Enum)this,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                    ), pOVar9 != (Object *)0x0)) {
              original = (this_00->fields).tierTestPopupPrefab;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pOVar10 = (Object__Class *)
                        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                  ((Object *)original,
                                   TierTestDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierTestDetailsPopup>_TierTestDetailsPopup_
                                  );
              if (pOVar2 != (Object *)0x0) {
                pOVar2[1].klass = pOVar10;
                pOVar9 = pOVar2 + 1;
                func_?();
                pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)this_00,(MethodInfo *)0x0);
                pEVar12 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          ((UnityAction_2_System_Object_System_Object_ *)pEVar12,pOVar2,
                           MethodInfo__SpawnRoleMenu____c__DisplayClass58_0___ShowTestTier_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                           ,(MethodInfo *)0x0);
                if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                }
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_ExecuteHierarchy
                          (pGVar11,(BaseEventData *)0x0,pEVar12,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                          );
                if (pOVar2[1].klass != (Object__Class *)0x0) {
                  TierTestDetailsPopup::TierTestDetailsPopup_Initialize
                            ((TierTestDetailsPopup *)pOVar2[1].klass,(GamePassTier__Enum)this,
                             (int32_t)pOVar9,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
    else {
      if (cRam_? == '\0') {
        func_?();
        func_?(&
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                       );
        func_?(&
                        UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                       );
        func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        func_?(&TypeInfo__GamePassesManager);
        func_?(&
                        MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                       );
        func_?(&
                        TierUnlockDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockDetailsPopup>_TierUnlockDetailsPopup_
                       );
        func_?(&TypeInfo__UnityEngine__Object);
        func_?(&MethodInfo__SpawnRoleMenu__OnPurchaseGamePassTier__);
        func_?(&
                        MethodInfo__SpawnRoleMenu____c__DisplayClass56_0___ShowTierPurchase_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       );
        func_?(&TypeInfo__SpawnRoleMenu____c__DisplayClass56_0);
        func_?(&TypeInfo__UnityEngine__Events__UnityAction);
        cRam_? = '\x01';
      }
      pOVar2 = (Object *)func_?(TypeInfo__SpawnRoleMenu____c__DisplayClass56_0);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (pOVar2,ExceptionArgument__Enum_obj,unaff_EDI);
      pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).SelectionElementsList;
      if ((pLVar3 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
         (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar3,(this->fields).selectedSpawnRole,
                             MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                            ), RVar4 != (RegexCharClass_SingleRange)0x0)) {
        (**(code **)(*(int *)RVar4 + 0xf0))();
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pPVar5 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
        if (pPVar5 != (PlayerPlanetData *)0x0) {
          iVar6 = (pPVar5->fields).progressionGamePoints;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pPVar5 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
          if ((pPVar5 != (PlayerPlanetData *)0x0) &&
             (pPVar7 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
             pPVar7 != (PlayerTierStateCalculator *)0x0)) {
            this = (SpawnRoleMenu *)CONCAT31(this._1_3_,(pPVar5->fields).gamePassTier);
            pDVar8 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator
                      ::PlayerTierStateCalculator_GetTierPricingState
                                (pPVar7,iVar6,(GamePassTier__Enum)this,(MethodInfo *)0x0);
            if ((pDVar8 !=
                 (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                  *)0x0) &&
               (pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          ByteEnum,System::Object]::
                          Dictionary_2_System_ByteEnum_System_Object__get_Item
                                    ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar8,
                                     (ByteEnum__Enum)this,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                    ), pOVar9 != (Object *)0x0)) {
              original_00 = (this_00->fields).tierUnlockPopupPrefab;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pOVar10 = (Object__Class *)
                        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                  ((Object *)original_00,
                                   TierUnlockDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockDetailsPopup>_TierUnlockDetailsPopup_
                                  );
              if (pOVar2 != (Object *)0x0) {
                pOVar2[1].klass = pOVar10;
                func_?();
                pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)this_00,(MethodInfo *)0x0);
                price = 
                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                ;
                pEVar12 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          ((UnityAction_2_System_Object_System_Object_ *)pEVar12,pOVar2,
                           MethodInfo__SpawnRoleMenu____c__DisplayClass56_0___ShowTierPurchase_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                           ,(MethodInfo *)0x0);
                if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_ExecuteHierarchy
                          (pGVar11,(BaseEventData *)0x0,pEVar12,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                          );
                pOVar10 = pOVar2[1].klass;
                this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
                UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (this_01,(Object *)this_00,
                           MethodInfo__SpawnRoleMenu__OnPurchaseGamePassTier__,(MethodInfo *)0x0);
                if (pOVar10 != (Object__Class *)0x0) {
                  TierUnlockDetailsPopup::TierUnlockDetailsPopup_Initialize
                            ((TierUnlockDetailsPopup *)pOVar10,(GamePassTier__Enum)this,
                             (int32_t)price,(UnityAction *)this_01,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  uVar13 = func_?(&stack0xfffffff0);
  func_?(uVar13);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void PrepareForSpawnRoleActivating() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_PrepareForSpawnRoleActivating
               (SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FirstTimePressPlayController);
    cRam_? = '\x01';
  }
  if (TypeInfo__FirstTimePressPlayController->static_fields->haveBeenPressed == 0) {
    FirstTimePressPlayController::FirstTimePressPlayController_OnFirstTimePlayIsPressed
              ((MethodInfo *)0x0);
  }
  MVGameControllerDesktop::MVGameControllerDesktop_CursorLock(1,1,(MethodInfo *)0x0);
  return;
}


/* Void RecalculateInterpolation(Int32) */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_RecalculateInterpolation
               (SpawnRoleMenu *this,int32_t index,MethodInfo *method)

{
  (this->fields).interpolateToPositionX =
       (this->fields).menuHalfWidth -
       ((float)(index + 1) * (this->fields).elementSpacing +
        (float)index * (this->fields).selectionElementWidth +
       (this->fields).selectionElementWidth * _UNK_?);
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).shouldInterpolate = 1;
  (this->fields).interpolationStartTime = fVar1;
  return;
}


/* Void ShowElements(Int32) */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_ShowElements
               (SpawnRoleMenu *this,int32_t startElementIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  (this->fields).currentSelectionStartIndex = startElementIndex;
  index = startElementIndex;
  if (startElementIndex < (this->fields).maxSelectionElementsOnScreen + startElementIndex) {
    do {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Count__
                       );
        cRam_? = '\x01';
      }
      if (-1 < index) {
        this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  (this->fields).SelectionElementsList;
        if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
code_?:
          func_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (index < (this_00->fields)._size) {
          this_01 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (this_00,index,
                               MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                              );
          if (this_01 == (RegexCharClass_SingleRange)0x0) goto code_?;
          DefaultSpawnRoleSelectionElement::DefaultSpawnRoleSelectionElement_Activate
                    ((DefaultSpawnRoleSelectionElement *)this_01,(MethodInfo *)0x0);
        }
      }
      index = index + 1;
    } while (index < (this->fields).maxSelectionElementsOnScreen + startElementIndex);
  }
  return;
}


/* Void ShowLockedTierPurchase() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_ShowLockedTierPurchase
               (SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                   );
    func_?(&
                    TierLockedDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierLockedDetailsPopup>_TierLockedDetailsPopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__SpawnRoleMenu__OnPurchaseGamePassTier__);
    func_?(&
                    MethodInfo__SpawnRoleMenu____c__DisplayClass57_0___ShowLockedTierPurchase_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SpawnRoleMenu____c__DisplayClass57_0);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SpawnRoleMenu____c__DisplayClass57_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).SelectionElementsList;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,(this->fields).selectedSpawnRole,
                       MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                      );
    if (RVar1 != (RegexCharClass_SingleRange)0x0) {
      uVar2 = (**(code **)(*(int *)RVar1 + 0xf0))(RVar1,*(undefined4 *)(*(int *)RVar1 + 0xf4));
      original = (this->fields).tierLockedPopupPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object,uVar2);
      }
      pOVar3 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)original,
                          TierLockedDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierLockedDetailsPopup>_TierLockedDetailsPopup_
                         );
      if (value != (Object *)0x0) {
        value[1].klass = pOVar3;
        func_?(value + 1,pOVar3);
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
        callbackFunction =
             (ExecuteEvents_EventFunction_1_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                   MethodInfo__SpawnRoleMenu____c__DisplayClass57_0___ShowLockedTierPurchase_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        pOVar3 = value[1].klass;
        this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_01,(Object *)this,MethodInfo__SpawnRoleMenu__OnPurchaseGamePassTier__,
                   (MethodInfo *)0x0);
        if (pOVar3 != (Object__Class *)0x0) {
          TierLockedDetailsPopup::TierLockedDetailsPopup_Initialize
                    ((TierLockedDetailsPopup *)pOVar3,(GamePassTier__Enum)this_01,
                     (UnityAction *)this_01,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ShowTestTier() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_ShowTestTier
               (SpawnRoleMenu *this,MethodInfo *method)

{
  this_02 = this;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                   );
    func_?(&
                    TierTestDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierTestDetailsPopup>_TierTestDetailsPopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__SpawnRoleMenu____c__DisplayClass58_0___ShowTestTier_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SpawnRoleMenu____c__DisplayClass58_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SpawnRoleMenu____c__DisplayClass58_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).SelectionElementsList;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,(this->fields).selectedSpawnRole,
                       MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                      );
    if (RVar1 != (RegexCharClass_SingleRange)0x0) {
      (**(code **)(*(int *)RVar1 + 0xf0))(RVar1,*(undefined4 *)(*(int *)RVar1 + 0xf4));
      if (cRam_? == '\0') {
        func_?(&TypeInfo__GamePassesManager);
        cRam_? = '\x01';
      }
      pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar2 != (PlayerPlanetData *)0x0) {
        playerGamePoints = (pPVar2->fields).progressionGamePoints;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__GamePassesManager);
          cRam_? = '\x01';
        }
        pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
        if ((pPVar2 != (PlayerPlanetData *)0x0) &&
           (this_01 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
           this_01 != (PlayerTierStateCalculator *)0x0)) {
          this = (SpawnRoleMenu *)CONCAT31(this._1_3_,(pPVar2->fields).gamePassTier);
          this_03 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                    PlayerTierStateCalculator_GetTierPricingState
                              (this_01,playerGamePoints,(GamePassTier__Enum)this,(MethodInfo *)0x0);
          if (this_03 !=
              (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
              0x0) {
            pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)this_03,
                                (ByteEnum__Enum)this,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                               );
            if (pOVar3 != (Object *)0x0) {
              original = (this_02->fields).tierTestPopupPrefab;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pOVar4 = (Object__Class *)
                       UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                 ((Object *)original,
                                  TierTestDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierTestDetailsPopup>_TierTestDetailsPopup_
                                 );
              if (value != (Object *)0x0) {
                value[1].klass = pOVar4;
                pOVar3 = value + 1;
                func_?(pOVar3,pOVar4);
                root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)this_02,(MethodInfo *)0x0);
                callbackFunction =
                     (ExecuteEvents_EventFunction_1_System_Object_ *)
                     func_?(
                                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                    );
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                           MethodInfo__SpawnRoleMenu____c__DisplayClass58_0___ShowTestTier_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                           ,(MethodInfo *)0x0);
                if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                }
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_ExecuteHierarchy
                          (root,(BaseEventData *)0x0,callbackFunction,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                          );
                if (value[1].klass != (Object__Class *)0x0) {
                  TierTestDetailsPopup::TierTestDetailsPopup_Initialize
                            ((TierTestDetailsPopup *)value[1].klass,(GamePassTier__Enum)this,
                             (int32_t)pOVar3,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ShowTierPurchase() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_ShowTierPurchase
               (SpawnRoleMenu *this,MethodInfo *method)

{
  this_02 = this;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                   );
    func_?(&
                    TierUnlockDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockDetailsPopup>_TierUnlockDetailsPopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__SpawnRoleMenu__OnPurchaseGamePassTier__);
    func_?(&
                    MethodInfo__SpawnRoleMenu____c__DisplayClass56_0___ShowTierPurchase_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SpawnRoleMenu____c__DisplayClass56_0);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SpawnRoleMenu____c__DisplayClass56_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).SelectionElementsList;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,(this->fields).selectedSpawnRole,
                       MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                      );
    if (RVar1 != (RegexCharClass_SingleRange)0x0) {
      (**(code **)(*(int *)RVar1 + 0xf0))(RVar1,*(undefined4 *)(*(int *)RVar1 + 0xf4));
      if (cRam_? == '\0') {
        func_?(&TypeInfo__GamePassesManager);
        cRam_? = '\x01';
      }
      pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar2 != (PlayerPlanetData *)0x0) {
        playerGamePoints = (pPVar2->fields).progressionGamePoints;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__GamePassesManager);
          cRam_? = '\x01';
        }
        pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
        if ((pPVar2 != (PlayerPlanetData *)0x0) &&
           (this_01 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
           this_01 != (PlayerTierStateCalculator *)0x0)) {
          key = 0;
          this = (SpawnRoleMenu *)CONCAT31(this._1_3_,(pPVar2->fields).gamePassTier);
          this_03 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                    PlayerTierStateCalculator_GetTierPricingState
                              (this_01,playerGamePoints,(GamePassTier__Enum)this,(MethodInfo *)0x0);
          if (this_03 !=
              (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
              0x0) {
            pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)this_03,key,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                               );
            if (pOVar3 != (Object *)0x0) {
              original = (this_02->fields).tierUnlockPopupPrefab;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pOVar4 = (Object__Class *)
                       UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                 ((Object *)original,
                                  TierUnlockDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockDetailsPopup>_TierUnlockDetailsPopup_
                                 );
              if (value != (Object *)0x0) {
                value[1].klass = pOVar4;
                func_?(value + 1,pOVar4);
                root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)this_02,(MethodInfo *)0x0);
                callbackFunction =
                     (ExecuteEvents_EventFunction_1_System_Object_ *)
                     func_?(
                                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                    );
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                           MethodInfo__SpawnRoleMenu____c__DisplayClass56_0___ShowTierPurchase_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                           ,(MethodInfo *)0x0);
                if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_ExecuteHierarchy
                          (root,(BaseEventData *)0x0,callbackFunction,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                          );
                pOVar4 = value[1].klass;
                this_04 = (NavMesh_OnNavMeshPreUpdate *)func_?();
                UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (this_04,(Object *)this_02,
                           MethodInfo__SpawnRoleMenu__OnPurchaseGamePassTier__,(MethodInfo *)0x0);
                if (pOVar4 != (Object__Class *)0x0) {
                  TierUnlockDetailsPopup::TierUnlockDetailsPopup_Initialize
                            ((TierUnlockDetailsPopup *)pOVar4,key,(int32_t)this_04,
                             (UnityAction *)this_04,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_Start(SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&MethodInfo__SpawnRoleMenu__OnPlayerPlanetDataUpdated__);
    cRam_? = '\x01';
  }
  LobbyFlowMenu::LobbyFlowMenu_Start((LobbyFlowMenu *)this,(MethodInfo *)0x0);
  pAVar1 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__SpawnRoleMenu__OnPlayerPlanetDataUpdated__,
             (MethodInfo *)0x0);
  pAStack2 =
       (Action *)
       mscorlib.dll::System::Delegate::Delegate_Combine
                 ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pAStack2 == (Action *)0x0) {
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
code_?:
    func_?();
    return;
  }
  pAVar1 = (Action *)0x0;
  if (pAStack2->klass == TypeInfo__System__Action) {
    pAVar1 = pAStack2;
  }
  if (pAVar1 == (Action *)0x0) {
    pAStack3 = TypeInfo__System__Action;
    func_?();
    pAStack2 = extraout_ECX;
    pAStack3 = extraout_EDX;
  }
  else {
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar1;
    pAVar1 = (Action *)0x0;
    if (pAStack2->klass == TypeInfo__System__Action) {
      pAVar1 = pAStack2;
    }
    pAStack3 = TypeInfo__System__Action;
    if (pAVar1 != (Action *)0x0) goto code_?;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void StartPlaying() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_StartPlaying
               (SpawnRoleMenu *this,MethodInfo *method)

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
  if (TypeInfo__FirstTimePressPlayController->static_fields->haveBeenPressed == 0) {
    FirstTimePressPlayController::FirstTimePressPlayController_OnFirstTimePlayIsPressed
              ((MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    MVGameControllerDesktop::MVGameControllerDesktop_CursorLock(1,0,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar1 != (GameSessionData *)0x0) {
      if ((pGVar1->fields).gameMode == 0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
        if (pGVar1 == (GameSessionData *)0x0) goto code_?;
        if ((pGVar1->fields).gameMode != 0) {
          return;
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
            (IEditModeUI *)0x0) goto code_?;
        cVar2 = func_?();
        if (cVar2 == '\0') {
          return;
        }
      }
      pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if ((pGVar3 != (GameEventManager *)0x0) &&
         (pGVar4 = (pGVar3->fields).AvatarCommandsPlayMode,
         pGVar4 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
        GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd__RegisterAdEvents_m__8
                  ((RewardedAd *)pGVar4,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
        (IPlayModeUI *)0x0) {
      func_?(6);
      pSVar5 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                         ((MethodInfo *)0x0);
      if ((pSVar5 != (SpawnRoleDataMediator *)0x0) &&
         (this_00 = (pSVar5->fields).SpawnRoleModeTypeWrapper,
         this_00 != (SpawnRoleModeTypeWrapper *)0x0)) {
        bVar6 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                          (this_00,SpawnRoleModeType__Enum_Hidden,(MethodInfo *)0x0);
        if (bVar6 == 0) {
          return;
        }
        pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
        if ((pGVar3 != (GameEventManager *)0x0) &&
           (pGVar4 = (pGVar3->fields).AvatarCommandsPlayMode,
           pGVar4 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
          GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd__RegisterAdEvents_m__9
                    ((RewardedAd *)pGVar4,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  uVar7 = func_?(&stack0xfffffff4);
  func_?(uVar7);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_Update
               (SpawnRoleMenu *this,MethodInfo *method)

{
  if ((this->fields).shouldInterpolate == 0) {
    return;
  }
  pTVar1 = (Transform *)(this->fields).elementContainer;
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffe0,pTVar1,(MethodInfo *)0x0);
    uVar3 = pVVar2->x;
    uVar4 = pVVar2->y;
    fVar5 = (this->fields).interpolateToPositionX;
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar6 = fVar6 - (this->fields).interpolationStartTime;
    if (fVar6 < 0.0) {
      fVar6 = 0.0;
    }
    else if (_UNK_? < fVar6) {
      fVar6 = _UNK_?;
    }
    pTVar1 = (Transform *)(this->fields).elementContainer;
    if (pTVar1 != (Transform *)0x0) {
      value.y = (float)uVar4;
      value.x = (fVar5 - (float)uVar3) * fVar6 + (float)uVar3;
      value.z = 0.0;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar1,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateShownElements() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_UpdateShownElements
               (SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Count__
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).scrollbar;
  if (this_00 != (Scrollbar *)0x0) {
    fVar1 = UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_get_value
                      (this_00,(MethodInfo *)0x0);
    pLVar2 = (this->fields).SelectionElementsList;
    if (pLVar2 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
      iVar3 = (pLVar2->fields)._size;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Math);
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Math);
      }
      cVar4 = cRam_?;
      fVar5 = (float10)func_?((double)((float)iVar3 * fVar1));
      fVar1 = (float)(this->fields).maxSelectionElementsOnScreen * _UNK_?;
      if (cVar4 == '\0') {
        func_?(&TypeInfo__System__Math);
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Math);
      }
      fVar5 = (float10)func_?((double)((float)(int)fVar5 - fVar1));
      pLVar2 = (this->fields).SelectionElementsList;
      if (pLVar2 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
        SpawnRoleMenu_HideElements
                  (this,(this->fields).currentSelectionStartIndex,(pLVar2->fields)._size,(int)fVar5,
                   (MethodInfo *)0x0);
        SpawnRoleMenu_ShowElements(this,(int)fVar5,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* SpawnRoleMenu() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu__ctor(SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>)
    ;
    cRam_? = '\x01';
  }
  (this->fields).maxSelectionElementsOnScreen = 10;
  this_00 = (List_1_DefaultSpawnRoleSelectionElement_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>
                           );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__List__
            );
  (this->fields).SelectionElementsList = this_00;
  func_?(&(this->fields).SelectionElementsList,this_00);
  LobbyStateController::LobbyStateController__ctor((LobbyStateController *)this,(MethodInfo *)0x0);
  return;
}

