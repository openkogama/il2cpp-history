
/* Void AwaitSpawnThenClose() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_AwaitSpawnThenClose
               (SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int>);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).awaitingSpawn = 1;
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
  if (extraout_RAX != 0) {
    lVar1 = *(longlong *)(extraout_RAX + 0x88);
    b = (Delegate *)FUN_?(TypeInfo__System__Action<int>);
    FUN_?(b,this);
    if (lVar1 != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Action<int>);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      plVar2 = (longlong *)(lVar1 + 0x20);
      a = *(Delegate **)(lVar1 + 0x20);
      do {
        pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine(a,b,(MethodInfo *)0x0);
        pAVar4 = TypeInfo__System__Action<int>;
        if (pDVar3 == (Delegate *)0x0) {
          lVar1 = 0;
        }
        else {
          lVar1 = FUN_?(pDVar3,TypeInfo__System__Action<int>);
          if (lVar1 == 0) {
            FUN_?(pDVar3,pAVar4);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        LOCK();
        pDVar3 = (Delegate *)*plVar2;
        bVar6 = a == pDVar3;
        if (bVar6) {
          *plVar2 = lVar1;
          pDVar3 = a;
        }
        UNLOCK();
        pDVar7 = a;
        if (!bVar6) {
          pDVar7 = pDVar3;
        }
        if (iRam_? != 0) {
          uVar8 = (uint)((ulonglong)plVar2 >> 0xc);
          uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
          do {
            uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
            puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
            LOCK();
            bVar6 = uVar10 == *puVar11;
            if (bVar6) {
              *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (!bVar6);
        }
        bVar6 = pDVar7 != a;
        a = pDVar7;
      } while (bVar6);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).SelectionElementsList;
  if (pLVar1 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
    if ((pLVar1->fields)._size == 1) {
      return 0;
    }
    pRVar2 = (this->fields).elementContainer;
    if (pRVar2 != (RectTransform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar3 = (pRVar2->fields)._._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar2,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        iVar5 = (*pcVar4)();
        return iVar5;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar4 = (code *)swi(3);
        iVar5 = (*pcVar4)();
        return iVar5;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar3);
      pRVar2 = (this->fields).elementContainer;
      if (pRVar2 != (RectTransform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_7 = 0;
        uStack_8 = 0;
        pvVar3 = (pRVar2->fields)._._._.m_CachedPtr;
        if (pvVar3 != (void *)0x0) {
          pcVar4 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
            uVar6 = func_?(&UNK_?);
            FUN_?(uVar6,0);
            pcVar4 = (code *)swi(3);
            iVar5 = (*pcVar4)();
            return iVar5;
          }
          pcRam_? = pcVar4;
          (*pcRam_?)(pvVar3,&uStack_7);
          iVar5 = FUN_?();
          return iVar5;
        }
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar2,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        iVar5 = (*pcVar4)();
        return iVar5;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Void Close(Int32) */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_Close
               (SpawnRoleMenu *this,int32_t spawnRoleID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleMenu____c___Close_b__62_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SpawnRoleMenu____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__SpawnRoleMenu____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__SpawnRoleMenu____c);
  }
  this_00 = TypeInfo__SpawnRoleMenu____c->static_fields->__9__62_0;
  if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__SpawnRoleMenu____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__SpawnRoleMenu____c);
    }
    object = TypeInfo__SpawnRoleMenu____c->static_fields->__9;
    this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
               MethodInfo__SpawnRoleMenu____c___Close_b__62_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__SpawnRoleMenu____c->static_fields->__9__62_0 = this_00;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&TypeInfo__SpawnRoleMenu____c->static_fields->__9__62_0 >> 0xc);
      puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar3 = *puVar2;
        LOCK();
        uVar4 = *puVar2;
        if (uVar3 == uVar4) {
          *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (uVar3 != uVar4);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pMVar5 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar5 != (MainCameraManager *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_CamRotateTarget);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    (pMVar5->fields).maskMode = 0;
    pCVar6 = (pMVar5->fields).mainCamera;
    if (pCVar6 != (Camera *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                (pCVar6,(pMVar5->fields).cullingMask,(MethodInfo *)0x0);
      bVar7 = (pMVar5->fields).isLogicRendered;
      (pMVar5->fields).blueModeEnabled = 0;
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral_Logic);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pCVar6 = (pMVar5->fields).mainCamera;
      if (bVar7 == 0) {
        if (pCVar6 == (Camera *)0x0) {
code_?:
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                          (pCVar6,(MethodInfo *)0x0);
        uVar9 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Logic,(MethodInfo *)0x0);
        uVar1 = uVar1 & ~(1 << (uVar9 & 0x1f));
      }
      else {
        if (pCVar6 == (Camera *)0x0) goto code_?;
        uVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                          (pCVar6,(MethodInfo *)0x0);
        uVar9 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Logic,(MethodInfo *)0x0);
        uVar1 = uVar1 | 1 << (uVar9 & 0x1f);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                (pCVar6,uVar1,(MethodInfo *)0x0);
      (pMVar5->fields).isLogicRendered = bVar7;
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void CreateDefaultAvatarElement() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_CreateDefaultAvatarElement
               (SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__Insert_int__DefaultSpawnRoleSelectionElement_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  DefaultSpawnRoleSelectionElement_MethodInfo__UnityEngine__Object__Instantiate<DefaultSpawnRoleSelectionElement>_DefaultSpawnRoleSelectionElement__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SpawnRoleMenu__OnSpawnRoleActivated_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SpawnRoleMenu__OnSpawnRoleSelected_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).defaultSelectionElementPrefab;
  pMVar2 = (MVPlayer *)(this->fields).elementContainer;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar3 = (MethodInfo *)0x0;
  pDVar1 = (DefaultSpawnRoleSelectionElement *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                     ((Object *)pDVar1,(Transform *)pMVar2,0,
                      DefaultSpawnRoleSelectionElement_MethodInfo__UnityEngine__Object__Instantiate<DefaultSpawnRoleSelectionElement>_DefaultSpawnRoleSelectionElement__UnityEngine__Transform__bool_
                     );
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar2,pMVar3);
  if (extraout_RAX != 0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((*(longlong *)(extraout_RAX + 0x90) != 0) &&
       (this_00 = *(Dictionary_2_System_Int32Enum_System_Int32Enum_ **)
                   (*(longlong *)(extraout_RAX + 0x90) + 0x10),
       this_00 != (Dictionary_2_System_Int32Enum_System_Int32Enum_ *)0x0)) {
      IVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Int32Enum]::Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                        (this_00,0,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                        );
      uVar5 = FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
      FUN_?(uVar5,this,MethodInfo__SpawnRoleMenu__OnSpawnRoleSelected_int_);
      uVar5 = FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
      FUN_?(uVar5,this,MethodInfo__SpawnRoleMenu__OnSpawnRoleActivated_int_);
      if (pDVar1 != (DefaultSpawnRoleSelectionElement *)0x0) {
        pMVar3 = (MethodInfo *)(ulonglong)IVar4;
        pMVar2 = (MVPlayer *)0x0;
        (*(pDVar1->klass->vtable).Initialize.methodPtr)();
        MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar2,pMVar3);
        if (extraout_RAX_00 != 0) {
          if (cRam_? == '\0') {
            FUN_?();
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if ((this_01 != (MVWorldObjectClientManager *)0x0) &&
             (pOVar6 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                                 (this_01,*(int32_t *)(extraout_RAX_00 + 0xa8),
                                  MVBody_MethodInfo__MVWorldObjectClientManager__GetWorldObjectClient<MVBody>_int_
                                 ), pOVar6 != (Object *)0x0)) {
            DefaultSpawnRoleSelectionElement::DefaultSpawnRoleSelectionElement_SetupPreviewImage
                      (pDVar1,(GameObject *)pOVar6[0xc].monitor,(MethodInfo *)0x0);
            (*(pDVar1->klass->vtable).OnUnSelected.methodPtr)(pDVar1);
            obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pDVar1,(MethodInfo *)0x0);
            if (obj != (Transform *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar7 = (obj->fields)._._.m_CachedPtr;
              if (pvVar7 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pcVar8 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                uVar5 = func_?(&UNK_?);
                FUN_?(uVar5,0);
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pcRam_? = pcVar8;
              (*pcRam_?)(pvVar7);
              pLVar9 = (this->fields).SelectionElementsList;
              if (pLVar9 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
                pDVar10 = (pLVar9->fields)._items;
                if (pDVar10 != (DefaultSpawnRoleSelectionElement__Array *)0x0) {
                  if ((pLVar9->fields)._size == (int)pDVar10->max_length) {
                    FUN_?(pLVar9,(pLVar9->fields)._size + 1,
                                  MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__Insert_int__DefaultSpawnRoleSelectionElement_
                                  ->klass->rgctx_data[0xf].rgctxDataDummy);
                  }
                  if (0 < (pLVar9->fields)._size) {
                    pDVar10 = (pLVar9->fields)._items;
                    mscorlib.dll::System::Array::Array_Copy_3
                              ((Array *)pDVar10,0,(Array *)pDVar10,1,(pLVar9->fields)._size,
                               (MethodInfo *)0x0);
                  }
                  pDVar10 = (pLVar9->fields)._items;
                  if (pDVar10 != (DefaultSpawnRoleSelectionElement__Array *)0x0) {
                    FUN_?(pDVar10,0,pDVar1);
                    piVar11 = &(pLVar9->fields)._size;
                    *piVar11 = *piVar11 + 1;
                    piVar11 = &(pLVar9->fields)._version;
                    *piVar11 = *piVar11 + 1;
                    return;
                  }
                }
                FUN_?();
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
    FUN_?(&TypeInfo__ISpawnRolePreviewObject);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__Add_DefaultSpawnRoleSelectionElement_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SpawnRoleSelectionElement_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSelectionElement>_SpawnRoleSelectionElement__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SpawnRoleMenu__OnSpawnRoleActivated_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SpawnRoleMenu__OnSpawnRoleSelected_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  original = (this->fields).selectionElementPrefab;
  parent = (Transform *)(this->fields).elementContainer;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_01 = (DefaultSpawnRoleSelectionElement *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                      ((Object *)original,parent,0,
                       SpawnRoleSelectionElement_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSelectionElement>_SpawnRoleSelectionElement__UnityEngine__Transform__bool_
                      );
  if (sortedWorldObjects != (List_1_MVWorldObjectClient_ *)0x0) {
    if ((uint)(sortedWorldObjects->fields)._size <= (uint)index) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pMVar2 = (sortedWorldObjects->fields)._items;
    if (pMVar2 != (MVWorldObjectClient__Array *)0x0) {
      if ((uint)pMVar2->max_length <= (uint)index) {
code_?:
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((pMVar2->vector[index] != (MVWorldObjectClient *)0x0) &&
         (uVar3 = (pMVar2->vector[index]->fields)._.id,
         sortedSpawnRoles != (List_1_ISpawnRolePreviewObject_ *)0x0)) {
        if ((uint)(sortedSpawnRoles->fields)._size <= (uint)index) goto code_?;
        pIVar4 = (sortedSpawnRoles->fields)._items;
        if (pIVar4 != (ISpawnRolePreviewObject__Array *)0x0) {
          if ((uint)pIVar4->max_length <= (uint)index) goto code_?;
          if (pIVar4->vector[index] != (ISpawnRolePreviewObject *)0x0) {
            bVar5 = FUN_?(2,TypeInfo__ISpawnRolePreviewObject);
            iVar6 = (this->fields).shownTeam;
            uVar7 = FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
            FUN_?(uVar7,this,MethodInfo__SpawnRoleMenu__OnSpawnRoleSelected_int_);
            uVar8 = FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
            FUN_?(uVar8,this,MethodInfo__SpawnRoleMenu__OnSpawnRoleActivated_int_);
            if (this_01 != (DefaultSpawnRoleSelectionElement *)0x0) {
              (*(this_01->klass->vtable).Initialize.methodPtr)
                        (this_01,(ulonglong)(uint)(index + startIndex),(ulonglong)uVar3,
                         (ulonglong)bVar5,iVar6,uVar7,uVar8,
                         (this_01->klass->vtable).Initialize.method);
              if ((uint)(sortedSpawnRoles->fields)._size <= (uint)index) goto code_?;
              pIVar4 = (sortedSpawnRoles->fields)._items;
              if (pIVar4 != (ISpawnRolePreviewObject__Array *)0x0) {
                if ((uint)pIVar4->max_length <= (uint)index) goto code_?;
                if (pIVar4->vector[index] != (ISpawnRolePreviewObject *)0x0) {
                  spawnRoleObject = (GameObject *)FUN_?(0,TypeInfo__ISpawnRolePreviewObject)
                  ;
                  DefaultSpawnRoleSelectionElement::
                  DefaultSpawnRoleSelectionElement_SetupPreviewImage
                            (this_01,spawnRoleObject,(MethodInfo *)0x0);
                  (*(this_01->klass->vtable).OnUnSelected.methodPtr)
                            (this_01,(this_01->klass->vtable).OnUnSelected.method);
                  pMVar9 = 
                  MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__Add_DefaultSpawnRoleSelectionElement_
                  ;
                  this_00 = (this->fields).SelectionElementsList;
                  if (this_00 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
                    piVar10 = &(this_00->fields)._version;
                    *piVar10 = *piVar10 + 1;
                    pDVar11 = (this_00->fields)._items;
                    if (pDVar11 != (DefaultSpawnRoleSelectionElement__Array *)0x0) {
                      uVar3 = (this_00->fields)._size;
                      if (uVar3 < (uint)pDVar11->max_length) {
                        (this_00->fields)._size = uVar3 + 1;
                        FUN_?(pDVar11,(longlong)(int)uVar3,this_01);
                      }
                      else {
                        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                        List_1_System_Object__AddWithResize
                                  ((List_1_System_Object_ *)this_00,(Object *)this_01,
                                   pMVar9->klass->rgctx_data[0xe].method);
                      }
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
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* List`1[ISpawnRolePreviewObject] GetSortedList(List`1[ISpawnRolePreviewObject]) */

List_1_ISpawnRolePreviewObject_ *
Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_GetSortedList
          (SpawnRoleMenu *this,List_1_ISpawnRolePreviewObject_ *unsortedList,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ISpawnRolePreviewObject>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ISpawnRolePreviewObject>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ISpawnRolePreviewObject>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ISpawnRolePreviewObject);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__Add_ISpawnRolePreviewObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__Insert_int__ISpawnRolePreviewObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Object_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__List__);
  if (unsortedList == (List_1_ISpawnRolePreviewObject_ *)0x0) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
    pcVar1 = (code *)swi(3);
    pLVar2 = (List_1_ISpawnRolePreviewObject_ *)(*pcVar1)();
    return pLVar2;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)(uint)(unsortedList->fields)._version << 0x20);
  uStack_9 = 0;
  LStack_10._8_8_ = pLStack_8;
  LStack_10._current = (Object *)0x0;
  uStack_4 = 0;
  pLStack_8 = &LStack_10;
  LStack_10._list = (List_1_System_Object_ *)unsortedList;
code_?:
  do {
    bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_10,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ISpawnRolePreviewObject>__MoveNext__
                      );
    item = LStack_10._current;
    if (bVar11 == 0) {
      return (List_1_ISpawnRolePreviewObject_ *)this_00;
    }
    index = 0;
    if (this_00 == (List_1_System_Object_ *)0x0) goto code_?;
    for (; index < (this_00->fields)._size; index = index + 1) {
      if (item == (Object *)0x0) goto code_?;
      bVar12 = FUN_?(2,TypeInfo__ISpawnRolePreviewObject,item);
      lVar13 = FUN_?(this_00,index);
      if (lVar13 == 0) goto code_?;
      bVar14 = FUN_?(2,TypeInfo__ISpawnRolePreviewObject,lVar13);
      if (bVar12 < bVar14) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Insert
                  (this_00,index,item,
                   MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__Insert_int__ISpawnRolePreviewObject_
                  );
        goto code_?;
      }
    }
    FUN_?(this_00,item);
  } while( true );
}


/* List`1[MVWorldObjectClient] GetSortedWorldObjectList(List`1[MVWorldObjectClient],
   List`1[ISpawnRolePreviewObject]) */

List_1_MVWorldObjectClient_ *
Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_GetSortedWorldObjectList
          (SpawnRoleMenu *this,List_1_MVWorldObjectClient_ *wos,
          List_1_ISpawnRolePreviewObject_ *unsortedList,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ISpawnRolePreviewObject);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__Add_ISpawnRolePreviewObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Insert_int__MVWorldObjectClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__Insert_int__ISpawnRolePreviewObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Object_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__List__);
  pLVar1 = (List_1_MVWorldObjectClient_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
  iVar2 = 0;
  if (unsortedList == (List_1_ISpawnRolePreviewObject_ *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    pLVar1 = (List_1_MVWorldObjectClient_ *)(*pcVar3)();
    return pLVar1;
  }
code_?:
  do {
    if ((unsortedList->fields)._size <= iVar2) {
      return pLVar1;
    }
    index = 0;
    if (this_00 == (List_1_System_Object_ *)0x0) goto code_?;
    for (; index < (this_00->fields)._size; index = index + 1) {
      lVar4 = FUN_?(unsortedList,iVar2);
      if (lVar4 == 0) goto code_?;
      bVar5 = FUN_?(2,TypeInfo__ISpawnRolePreviewObject,lVar4);
      lVar4 = FUN_?(this_00,index);
      if (lVar4 == 0) goto code_?;
      bVar6 = FUN_?(2,TypeInfo__ISpawnRolePreviewObject,lVar4);
      if (bVar5 < bVar6) {
        pOVar7 = (Object *)FUN_?(unsortedList,iVar2);
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Insert
                  (this_00,index,pOVar7,
                   MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__Insert_int__ISpawnRolePreviewObject_
                  );
        if ((wos == (List_1_MVWorldObjectClient_ *)0x0) ||
           (pOVar7 = (Object *)FUN_?(wos,iVar2),
           pLVar1 == (List_1_MVWorldObjectClient_ *)0x0)) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Insert
                  ((List_1_System_Object_ *)pLVar1,index,pOVar7,
                   MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Insert_int__MVWorldObjectClient_
                  );
        iVar2 = iVar2 + 1;
        goto code_?;
      }
    }
    uVar8 = FUN_?(unsortedList,iVar2);
    FUN_?(this_00,uVar8);
    if ((wos == (List_1_MVWorldObjectClient_ *)0x0) ||
       (uVar8 = FUN_?(wos,iVar2), pLVar1 == (List_1_MVWorldObjectClient_ *)0x0))
    goto code_?;
    FUN_?(pLVar1,uVar8);
    iVar2 = iVar2 + 1;
  } while( true );
}


/* Void HandleTeamSwitching(Int32) */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_HandleTeamSwitching
               (SpawnRoleMenu *this,int32_t spawnRoleId,MethodInfo *method)

{
  iVar1 = (this->fields).shownTeam;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase,CONCAT44(in_register_00000014,spawnRoleId));
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar2 != (MVGameControllerBase *)0x0) &&
       (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
      (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0)) &&
     (pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
     pMVar5 != (MVLocalPlayer *)0x0)) {
    if (iVar1 == (pMVar5->fields)._._Team_k__BackingField) {
      return;
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTeam
                (this_01,(this->fields).shownTeam,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar2 != (MVGameControllerBase *)0x0) &&
         (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) {
        this_00 = (pMVar3->fields).gameStatCounterManager;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar2 != (MVGameControllerBase *)0x0) &&
            (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
           ((pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0 &&
            (pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar4,(MethodInfo *)0x0)
            , pMVar5 != (MVLocalPlayer *)0x0)))) {
          actorNr = (pMVar5->fields)._._ActorNr_k__BackingField;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((((pMVar2 != (MVGameControllerBase *)0x0) &&
               (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
              (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0)) &&
             ((pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                  (pMVar4,(MethodInfo *)0x0), pMVar5 != (MVLocalPlayer *)0x0 &&
              (this_00 != (GameStatCounterManager *)0x0)))) {
            MVWorldObject.dll::GameStatCounterManager::
            GameStatCounterManager_RemoveTeamScoreOnActorLeave
                      (this_00,actorNr,(pMVar5->fields)._._Team_k__BackingField,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if (((pMVar2 != (MVGameControllerBase *)0x0) &&
                (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
               ((pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0 &&
                (pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                    (pMVar4,(MethodInfo *)0x0), pMVar5 != (MVLocalPlayer *)0x0)))) {
              bVar6 = cRam_? == '\0';
              (pMVar5->fields)._.checkpointWOID = -1;
              if (bVar6) {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if ((((pMVar2 != (MVGameControllerBase *)0x0) &&
                   (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
                  (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0))
                 && (pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                        (pMVar4,(MethodInfo *)0x0), pMVar5 != (MVLocalPlayer *)0x0))
              {
                (pMVar5->fields)._._Team_k__BackingField = (this->fields).shownTeam;
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void HideBackButton() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_HideBackButton
               (SpawnRoleMenu *this,MethodInfo *method)

{
  obj = (this->fields).backButton;
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,0,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,0);
  return;
}


/* Void HideElements(Int32, Int32, Int32) */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_HideElements
               (SpawnRoleMenu *this,int32_t previousStartElement,int32_t amountOfElements,
               int32_t newStartElement,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (previousStartElement < previousStartElement + amountOfElements) {
    iVar1 = amountOfElements + previousStartElement;
    do {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Count__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (-1 < previousStartElement) {
        pLVar2 = (this->fields).SelectionElementsList;
        if (pLVar2 == (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
code_?:
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((previousStartElement < (pLVar2->fields)._size) &&
           ((previousStartElement < newStartElement ||
            ((this->fields).maxSelectionElementsOnScreen + newStartElement < previousStartElement)))
           ) {
          this_00 = (DefaultSpawnRoleSelectionElement *)FUN_?(pLVar2);
          if (this_00 == (DefaultSpawnRoleSelectionElement *)0x0) goto code_?;
          DefaultSpawnRoleSelectionElement::DefaultSpawnRoleSelectionElement_Deactivate
                    (this_00,(MethodInfo *)0x0);
        }
      }
      previousStartElement = previousStartElement + 1;
    } while (previousStartElement < iVar1);
  }
  return;
}


/* Void Initialize(MVTeam) */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_Initialize
               (SpawnRoleMenu *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ISpawnRolePreviewObject);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__UI__LayoutRebuilder);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__Add_ISpawnRolePreviewObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).shownTeam = team;
  pDVar1 = (this->fields).dragInputReciever;
  if (pDVar1 != (DragInputHandler *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<IDragInputReciever>__Add_IDragInputReciever_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = 
    MethodInfo__System__Collections__Generic__List<IDragInputReciever>__Add_IDragInputReciever_;
    this_00 = (List_1_System_Object_ *)(pDVar1->fields).dragInputRecievers;
    if (this_00 != (List_1_System_Object_ *)0x0) {
      piVar3 = &(this_00->fields)._version;
      *piVar3 = *piVar3 + 1;
      pOVar4 = (this_00->fields)._items;
      uVar5 = (this_00->fields)._size;
      if (pOVar4 != (Object__Array *)0x0) {
        if (uVar5 < (uint)pOVar4->max_length) {
          (this_00->fields)._size = uVar5 + 1;
          FUN_?();
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__AddWithResize
                    (this_00,(Object *)this,pMVar2->klass->rgctx_data[0xe].method);
        }
        pMVar6 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        if (pMVar6 != (MainCameraManager *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&StringLiteral_CamRotateTarget);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          (pMVar6->fields).maskMode = 2;
          this_01 = (pMVar6->fields).mainCamera;
          if (this_01 != (Camera *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                      (this_01,0,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if ((((pMVar7 != (MVGameControllerBase *)0x0) &&
                 (pMVar8 = (pMVar7->fields).game, pMVar8 != (MVNetworkGame *)0x0)) &&
                ((pMVar8->fields).worldNetwork != (WorldNetwork *)0x0)) &&
               (this_02 = (MVWorldObjectClientManager *)
                          (((pMVar8->fields).worldNetwork)->fields)._.worldObjectClientManager,
               this_02 != (MVWorldObjectClientManager *)0x0)) {
              pLVar9 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                                  (this_02,WorldObjectType__Enum_AvatarSpawnRoleCreator,
                                   (MethodInfo *)0x0);
              unsortedList = (List_1_ISpawnRolePreviewObject_ *)
                             FUN_?(
                                          TypeInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>
                                          );
              mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
              __Il2CppFullySharedGenericType]::
              LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                        ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                         unsortedList,
                         MethodInfo__System__Collections__Generic__List<ISpawnRolePreviewObject>__List__
                        );
              wos = (List_1_MVWorldObjectClient_ *)
                    FUN_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>)
              ;
              mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
              __Il2CppFullySharedGenericType]::
              LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                        ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)wos,
                         MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__
                        );
              if (pLVar9 != (List_1_MVWorldObjectClient_ *)0x0) {
                if (iRam_? != 0) {
                  uVar5 = (uint)((ulonglong)&uStack_10 >> 0xc);
                  uVar11 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
                  do {
                    uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
                    puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
                    LOCK();
                    bVar14 = uVar12 == *puVar13;
                    if (bVar14) {
                      *puVar13 = uVar12 | 1L << (uVar5 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar14);
                }
                index = 0;
                pLStack_15 = (List_1_T_Enumerator_System_Object_ *)
                             ((ulonglong)(uint)(pLVar9->fields)._version << 0x20);
                uStack_16 = 0;
                aLStack_17[0]._8_8_ = pLStack_15;
                aLStack_17[0]._current = (Object *)0x0;
                uStack_10 = 0;
                pLStack_15 = aLStack_17;
                aLStack_17[0]._list = (List_1_System_Object_ *)pLVar9;
                while (bVar18 = mscorlib.dll::System::Collections::Generic::
                                List`1[T]+Enumerator[System::Object]::
                                List_1_T_Enumerator_System_Object__MoveNext
                                          (aLStack_17,
                                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                                          ), pOVar19 = aLStack_17[0]._current,
                      unaff_RSI = TypeInfo__ISpawnRolePreviewObject, bVar18 != 0) {
                  if (aLStack_17[0]._current == (Object *)0x0) goto code_?;
                  plVar20 = (longlong *)
                            FUN_?(aLStack_17[0]._current,TypeInfo__ISpawnRolePreviewObject);
                  if (plVar20 == (longlong *)0x0) goto code_?;
                  lVar21 = *plVar20;
                  uVar22 = 0;
                  if (*(ushort *)(lVar21 + 0x12e) != 0) {
                    do {
                      if (*(ISpawnRolePreviewObject__Class **)
                           (*(longlong *)(lVar21 + 0xb0) + (ulonglong)uVar22 * 0x10) ==
                          TypeInfo__ISpawnRolePreviewObject) {
                        puVar23 = (undefined8 *)
                                  ((longlong)
                                   (*(int *)(*(longlong *)(lVar21 + 0xb0) + 8 +
                                            (ulonglong)uVar22 * 0x10) + 1) * 0x10 + 0x138 + lVar21);
                        goto code_?;
                      }
                      uVar22 = uVar22 + 1;
                    } while (uVar22 < *(ushort *)(lVar21 + 0x12e));
                  }
                  puVar23 = (undefined8 *)FUN_?(plVar20,TypeInfo__ISpawnRolePreviewObject);
code_?:
                  iVar24 = (*(code *)*puVar23)(plVar20,puVar23[1]);
                  unaff_R14 = pOVar19;
                  if ((iVar24 == 5) ||
                     (iVar24 = FUN_?(1,TypeInfo__ISpawnRolePreviewObject),
                     iVar24 == (this->fields).shownTeam)) {
                    if (unsortedList == (List_1_ISpawnRolePreviewObject_ *)0x0)
                    goto code_?;
                    FUN_?(unsortedList,plVar20);
                    if (wos == (List_1_MVWorldObjectClient_ *)0x0) goto code_?;
                    FUN_?(wos,pOVar19);
                  }
                }
                unaff_RSI = (ISpawnRolePreviewObject__Class *)
                            SpawnRoleMenu_GetSortedList(this,unsortedList,(MethodInfo *)0x0);
                pLVar9 = SpawnRoleMenu_GetSortedWorldObjectList
                                    (this,wos,unsortedList,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
                if (((pMVar7 != (MVGameControllerBase *)0x0) &&
                    (pMVar8 = (pMVar7->fields).game, pMVar8 != (MVNetworkGame *)0x0)) &&
                   (this_03 = (pMVar8->fields).teamManager, this_03 != (MVTeamManager *)0x0)) {
                  bVar18 = MVTeamManager::MVTeamManager_TeamHasSpawnPoints
                                     (this_03,(this->fields).shownTeam,(MethodInfo *)0x0);
                  unaff_R14 = (Object *)(ulonglong)bVar18;
                  if (unaff_RSI != (ISpawnRolePreviewObject__Class *)0x0) {
                    for (; index < *(int *)&(unaff_RSI->_0).namespaze; index = index + 1) {
                      SpawnRoleMenu_CreateSpawnRoleSelectionElement
                                (this,(uint)bVar18,index,
                                 (List_1_ISpawnRolePreviewObject_ *)unaff_RSI,pLVar9,
                                 (MethodInfo *)0x0);
                    }
                    if (bVar18 != 0) {
                      SpawnRoleMenu_CreateDefaultAvatarElement(this,(MethodInfo *)0x0);
                    }
                    pRVar25 = (this->fields).elementContainer;
                    if (*(int *)&(TypeInfo__UnityEngine__UI__LayoutRebuilder->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    UnityEngine.UI.dll::UnityEngine::UI::LayoutRebuilder::
                    LayoutRebuilder_ForceRebuildLayoutImmediate(pRVar25,(MethodInfo *)0x0);
                    pRVar25 = (this->fields).elementContainer;
                    if (pRVar25 != (RectTransform *)0x0) {
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      uStack_10 = 0;
                      pLStack_15 = (List_1_T_Enumerator_System_Object_ *)0x0;
                      unaff_RSI = (pRVar25->fields)._._._.m_CachedPtr;
                      if (unaff_RSI == (ISpawnRolePreviewObject__Class *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException
                                  ((Object *)pRVar25,(MethodInfo *)0x0);
                        pcVar26 = (code *)swi(3);
                        (*pcVar26)();
                        return;
                      }
                      pcVar26 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar26 = (code *)FUN_?(&UNK_?), pcVar26 == (code *)0x0))
                      {
                        uVar27 = func_?(&UNK_?);
                        FUN_?(uVar27,0);
                        pcVar26 = (code *)swi(3);
                        (*pcVar26)();
                        return;
                      }
                      pcRam_? = pcVar26;
                      (*pcRam_?)(unaff_RSI);
                      (this->fields).menuHalfWidth = pLStack_15._0_4_ * _UNK_?;
                      SpawnRoleMenu_OnSpawnRoleSelected(this,0,(MethodInfo *)0x0);
                      pRVar25 = (this->fields).elementContainer;
                      fVar28 = (this->fields).interpolateToPositionX;
                      unaff_R14 = (Object *)0x0;
                      if (pRVar25 != (RectTransform *)0x0) {
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pvVar29 = (pRVar25->fields)._._._.m_CachedPtr;
                        if (pvVar29 == (void *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                          ThrowHelper_2_ThrowNullReferenceException
                                    ((Object *)pRVar25,(MethodInfo *)0x0);
                          pcVar26 = (code *)swi(3);
                          (*pcVar26)();
                          return;
                        }
                        pcVar26 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar26 = (code *)FUN_?(&UNK_?), pcVar26 == (code *)0x0)
                           ) {
                          uVar27 = func_?(&UNK_?);
                          FUN_?(uVar27,0);
                          pcVar26 = (code *)swi(3);
                          (*pcVar26)();
                          return;
                        }
                        pcRam_? = pcVar26;
                        (*pcRam_?)(pvVar29);
                        uStack_10 = (ulonglong)(uint)fVar28;
                        pLStack_15 = (List_1_T_Enumerator_System_Object_ *)
                                     ((ulonglong)pLStack_15 & 0xffffffff00000000);
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pvVar29 = (pRVar25->fields)._._._.m_CachedPtr;
                        if (pvVar29 == (void *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                          ThrowHelper_2_ThrowNullReferenceException
                                    ((Object *)pRVar25,(MethodInfo *)0x0);
                          pcVar26 = (code *)swi(3);
                          (*pcVar26)();
                          return;
                        }
                        pcVar26 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar26 = (code *)FUN_?(&UNK_?), pcVar26 == (code *)0x0)
                           ) {
                          uVar27 = func_?(&UNK_?);
                          FUN_?(uVar27,0);
                          pcVar26 = (code *)swi(3);
                          (*pcVar26)();
                          return;
                        }
                        pcRam_? = pcVar26;
                        (*pcRam_?)(pvVar29);
                        pLVar30 = (this->fields).SelectionElementsList;
                        if (pLVar30 == (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
                          FUN_?();
                          pcVar26 = (code *)swi(3);
                          (*pcVar26)();
                          return;
                        }
                        SpawnRoleMenu_HideElements
                                  (this,0,(pLVar30->fields)._size,0,(MethodInfo *)0x0);
                        SpawnRoleMenu_ShowElements(this,0,(MethodInfo *)0x0);
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
  FUN_?();
  pOVar19 = unaff_R14;
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?(pOVar19,unaff_RSI);
  FUN_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* Boolean IsIndexWithinBounds(Int32) */

bool Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_IsIndexWithinBounds
               (SpawnRoleMenu *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (index < 0) {
    return 0;
  }
  pLVar1 = (this->fields).SelectionElementsList;
  if (pLVar1 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
    return index < (pLVar1->fields)._size;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void LateUpdate() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_LateUpdate
               (SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper__InputSuppression);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (MVInputWrapper_InputSuppression *)
           FUN_?(TypeInfo__MVInputWrapper__InputSuppression);
  (*(pMVar1->klass->vtable).set_IsSuppressed.methodPtr)
            (pMVar1,CONCAT71((int7)((ulonglong)method >> 8),1),
             (pMVar1->klass->vtable).set_IsSuppressed.method);
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MVInputWrapper);
  }
  TypeInfo__MVInputWrapper->static_fields->isShortcutKeysSuppressed = pMVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&TypeInfo__MVInputWrapper->static_fields->isShortcutKeysSuppressed >>
                  0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}


/* Void LockedButtonPressed() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_LockedButtonPressed
               (SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 == (GameSessionData *)0x0) {
    FUN_?();
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if ((pGVar1->fields).gameMode == 0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TierTestDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierTestDetailsPopup>_TierTestDetailsPopup_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__SpawnRoleMenu____c__DisplayClass58_0___ShowTestTier_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__SpawnRoleMenu____c__DisplayClass58_0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOVar2 = (Object *)FUN_?(TypeInfo__SpawnRoleMenu____c__DisplayClass58_0);
    pLVar3 = (this->fields).SelectionElementsList;
    if (pLVar3 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
      uVar4 = (this->fields).selectedSpawnRole;
      if ((uint)(pLVar3->fields)._size <= uVar4) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        UNRECOVERED_JUMPTABLE = (code *)swi(3);
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      pDVar5 = (pLVar3->fields)._items;
      if (pDVar5 != (DefaultSpawnRoleSelectionElement__Array *)0x0) {
        if ((uint)pDVar5->max_length <= uVar4) {
          FUN_?();
          UNRECOVERED_JUMPTABLE = (code *)swi(3);
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
        pDVar6 = pDVar5->vector[(int)uVar4];
        if (pDVar6 != (DefaultSpawnRoleSelectionElement *)0x0) {
          bVar7 = (*(pDVar6->klass->vtable).get_Tier.methodPtr)
                             (pDVar6,(pDVar6->klass->vtable).get_Tier.method);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__GamePassesManager);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pPVar8 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
          if (pPVar8 != (PlayerPlanetData *)0x0) {
            playerGamePoints = (pPVar8->fields).progressionGamePoints;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__GamePassesManager);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pPVar8 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
            if (pPVar8 != (PlayerPlanetData *)0x0) {
              this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
              bVar9 = (pPVar8->fields).gamePassTier;
              if (this_00 != (PlayerTierStateCalculator *)0x0) {
                if ((this_00->fields).gamePointVelocityIsZero == 0) {
                  this_02 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::
                            PlayerTierStateCalculator::
                            PlayerTierStateCalculator_GetTierPricingStateBasedOnUserGamePointAmount
                                      (this_00,playerGamePoints,(uint)bVar9,(MethodInfo *)0x0);
                }
                else {
                  this_02 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::
                            PlayerTierStateCalculator::
                            PlayerTierStateCalculator_GetTierPricingStateBasedOnUserTier
                                      (this_00,(uint)bVar9,(MethodInfo *)0x0);
                }
                if ((this_02 !=
                     (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                      *)0x0) &&
                   (pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              ByteEnum,System::Object]::
                              Dictionary_2_System_ByteEnum_System_Object__get_Item
                                        ((Dictionary_2_System_ByteEnum_System_Object_ *)this_02,
                                         (uint)bVar7,
                                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                        ), pOVar10 != (Object *)0x0)) {
                  original_00 = (this->fields).tierTestPopupPrefab;
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  pOVar11 = (Object__Class *)
                            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                      ((Object *)original_00,
                                       TierTestDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierTestDetailsPopup>_TierTestDetailsPopup_
                                      );
                  if (pOVar2 != (Object *)0x0) {
                    bVar12 = iRam_? != 0;
                    pOVar2[1].klass = pOVar11;
                    if (bVar12) {
                      uVar4 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
                      puVar13 = (ulonglong *)
                               ((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
                      do {
                        uVar14 = *puVar13;
                        LOCK();
                        uVar15 = *puVar13;
                        if (uVar14 == uVar15) {
                          *puVar13 = uVar14 | 1L << (uVar4 & 0x3f);
                        }
                        UNLOCK();
                      } while (uVar14 != uVar15);
                    }
                    pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                    pEVar17 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                              FUN_?(
                                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                           );
                    UnityEngine.UI.dll::UnityEngine::EventSystems::
                    ExecuteEvents+EventFunction`1[System::Object]::
                    ExecuteEvents_EventFunction_1_System_Object___ctor
                              (pEVar17,pOVar2,
                               MethodInfo__SpawnRoleMenu____c__DisplayClass58_0___ShowTestTier_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                               ,(MethodInfo *)0x0);
                    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c
                        == 0) {
                      FUN_?();
                    }
                    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_ExecuteHierarchy
                              (pGVar16,(BaseEventData *)0x0,pEVar17,
                               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                              );
                    pOVar11 = pOVar2[1].klass;
                    if (pOVar11 != (Object__Class *)0x0) {
                      bVar12 = cRam_? == '\0';
                      pIVar18 = (pOVar11->_0).byval_arg.data.array;
                      *(byte *)&(pOVar11->_0).this_arg.attrs = bVar7;
                      if (bVar12) {
                        FUN_?(&TypeInfo__System__Number);
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->
                           klass->field_0x135 & 1) == 0) {
                        FUN_?();
                      }
                      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      auStack_19 = (undefined1  [8])0x0;
                      puStack_20 = (undefined *)0x0;
                      pSVar21 = mscorlib.dll::System::Number::Number_FormatInt32
                                          ((uint)bVar7,(ReadOnlySpan_1_Char_ *)auStack_19,
                                           (IFormatProvider *)0x0,(MethodInfo *)0x0);
                      if (pIVar18 != (Il2CppArrayType *)0x0) {
                        (**(code **)&pIVar18->etype[0x5e].attrs)
                                  (pIVar18,pSVar21,pIVar18->etype[0x5f].data.dummy);
                        plVar22 = *(longlong **)&(pOVar11->_0).byval_arg.attrs;
                        pSVar21 = mscorlib.dll::System::Int32::Int32_ToString
                                            ((Int32 *)&stack0x00000008,(MethodInfo *)0x0);
                        if (plVar22 != (longlong *)0x0) {
                          UNRECOVERED_JUMPTABLE = *(code **)(*plVar22 + 0x5e8);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          (*UNRECOVERED_JUMPTABLE)
                                    (plVar22,pSVar21,*(undefined8 *)(*plVar22 + 0x5f0),
                                     UNRECOVERED_JUMPTABLE);
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
    FUN_?();
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TierLockedDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierLockedDetailsPopup>_TierLockedDetailsPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SpawnRoleMenu__OnPurchaseGamePassTier__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleMenu____c__DisplayClass57_0___ShowLockedTierPurchase_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SpawnRoleMenu____c__DisplayClass57_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = (Object *)FUN_?(TypeInfo__SpawnRoleMenu____c__DisplayClass57_0);
  pLVar3 = (this->fields).SelectionElementsList;
  if (pLVar3 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
    uVar4 = (this->fields).selectedSpawnRole;
    if ((uint)(pLVar3->fields)._size <= uVar4) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    pDVar5 = (pLVar3->fields)._items;
    if (pDVar5 != (DefaultSpawnRoleSelectionElement__Array *)0x0) {
      if ((uint)pDVar5->max_length <= uVar4) {
        FUN_?();
        UNRECOVERED_JUMPTABLE = (code *)swi(3);
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      pDVar6 = pDVar5->vector[(int)uVar4];
      if (pDVar6 != (DefaultSpawnRoleSelectionElement *)0x0) {
        bVar7 = (*(pDVar6->klass->vtable).get_Tier.methodPtr)
                           (pDVar6,(pDVar6->klass->vtable).get_Tier.method);
        original = (this->fields).tierLockedPopupPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pOVar11 = (Object__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)original,
                             TierLockedDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierLockedDetailsPopup>_TierLockedDetailsPopup_
                            );
        if (pOVar2 != (Object *)0x0) {
          bVar12 = iRam_? != 0;
          pOVar2[1].klass = pOVar11;
          if (bVar12) {
            uVar4 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
            lVar23 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
            do {
              uVar15 = *(ulonglong *)(lVar23 + 0xADDR);
              puVar13 = (ulonglong *)(lVar23 + 0xADDR);
              LOCK();
              bVar12 = uVar15 == *puVar13;
              if (bVar12) {
                *puVar13 = uVar15 | 1L << (uVar4 & 0x3f);
              }
              UNLOCK();
            } while (!bVar12);
          }
          pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
          pEVar17 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    (pEVar17,pOVar2,
                     MethodInfo__SpawnRoleMenu____c__DisplayClass57_0___ShowLockedTierPurchase_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar16,(BaseEventData *)0x0,pEVar17,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          pOVar11 = pOVar2[1].klass;
          this_01 = (NavMesh_OnNavMeshPreUpdate *)
                    FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (this_01,(Object *)this,MethodInfo__SpawnRoleMenu__OnPurchaseGamePassTier__,
                     (MethodInfo *)0x0);
          if (pOVar11 != (Object__Class *)0x0) {
            bVar12 = iRam_? != 0;
            *(byte *)&(pOVar11->_0).generic_class = bVar7;
            (pOVar11->_0).typeMetadataHandle = (Il2CppMetadataTypeHandle)this_01;
            if (bVar12) {
              uVar4 = (uint)((ulonglong)&(pOVar11->_0).typeMetadataHandle >> 0xc);
              lVar23 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
              do {
                uVar15 = *(ulonglong *)(lVar23 + 0xADDR);
                puVar13 = (ulonglong *)(lVar23 + 0xADDR);
                LOCK();
                bVar12 = uVar15 == *puVar13;
                if (bVar12) {
                  *puVar13 = uVar15 | 1L << (uVar4 & 0x3f);
                }
                UNLOCK();
              } while (!bVar12);
            }
            pTVar24 = (Text *)(pOVar11->_0).byval_arg.data.array;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__System__Number);
              LOCK();
              UNLOCK();
              FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
                 field_0x135 & 1) == 0) {
              FUN_?();
            }
            if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
              FUN_?();
            }
            auStack_19 = (undefined1  [8])0x0;
            puStack_20 = (undefined *)0x0;
            pSVar21 = mscorlib.dll::System::Number::Number_FormatInt32
                                ((uint)bVar7,(ReadOnlySpan_1_Char_ *)auStack_19,
                                 (IFormatProvider *)0x0,(MethodInfo *)0x0);
            if (pTVar24 != (Text *)0x0) {
              (*(pTVar24->klass->vtable).set_text.methodPtr)
                        (pTVar24,pSVar21,(pTVar24->klass->vtable).set_text.method);
              TierLockedDetailsPopup::TierLockedDetailsPopup_UpdateLockedText
                        ((TierLockedDetailsPopup *)pOVar11,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__GamePassesManager);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0
                 ) {
                TierLockedDetailsPopup::TierLockedDetailsPopup_UpdateTierProgressBar
                          ((TierLockedDetailsPopup *)pOVar11,(MethodInfo *)0x0);
              }
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  UNRECOVERED_JUMPTABLE = (code *)swi(3);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* Void OnBeginDrag() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_OnBeginDrag
               (SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<DefaultSpawnRoleSelectionElement>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<DefaultSpawnRoleSelectionElement>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<DefaultSpawnRoleSelectionElement>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).shouldInterpolate = 0;
  obj = (this->fields).elementContainer;
  if (obj == (RectTransform *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_2 = 0;
  pLStack_3 = (List_1_T_Enumerator_System_Object_ *)((ulonglong)pLStack_3 & 0xffffffff00000000);
  pvVar4 = (obj->fields)._._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
  }
  else {
    pcRam_? = pcVar1;
    (*pcRam_?)(pvVar4,&uStack_2);
    (this->fields).dragStartPositionX = (float)uStack_2;
    LStack_6._list = (List_1_System_Object_ *)(this->fields).SelectionElementsList;
    if ((List_1_DefaultSpawnRoleSelectionElement_ *)LStack_6._list ==
        (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) goto code_?;
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&uStack_2 >> 0xc);
      uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
      do {
        uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
        puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
        LOCK();
        bVar11 = uVar9 == *puVar10;
        if (bVar11) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    pLStack_3 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)
                  (uint)(((List_1_DefaultSpawnRoleSelectionElement_ *)LStack_6._list)->fields).
                        _version << 0x20);
    uStack_12 = 0;
    LStack_6._8_8_ = pLStack_3;
    LStack_6._current = (Object *)0x0;
    uStack_2 = 0;
    pLStack_3 = &LStack_6;
    while( true ) {
      bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<DefaultSpawnRoleSelectionElement>__MoveNext__
                        );
      if (bVar13 == 0) {
        return;
      }
      if (LStack_6._current == (Object *)0x0) break;
      *(undefined1 *)&LStack_6._current[6].monitor = 1;
    }
  }
  FUN_?();
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_OnDestroy
               (SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SpawnRoleMenu__Close_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SpawnRoleMenu__OnPlayerPlanetDataUpdated__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LobbyFlowMenu::LobbyFlowMenu_OnDestroy((LobbyFlowMenu *)this,(MethodInfo *)0x0);
  source = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
  this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_01,(Object *)this,MethodInfo__SpawnRoleMenu__OnPlayerPlanetDataUpdated__,
             (MethodInfo *)0x0);
  method_00 = (MVPlayer *)
              mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)source,(Delegate *)this_01,(MethodInfo *)0x0);
  player = (MVPlayer *)0x0;
  if (method_00 == (MVPlayer *)0x0) {
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
  }
  else {
    pMVar1 = player;
    if ((Action__Class *)method_00->klass == TypeInfo__System__Action) {
      pMVar1 = method_00;
    }
    if (pMVar1 == (MVPlayer *)0x0) {
      FUN_?(method_00,TypeInfo__System__Action);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)pMVar1;
    if ((Action__Class *)method_00->klass == TypeInfo__System__Action) {
      player = method_00;
    }
    if (player == (MVPlayer *)0x0) {
      FUN_?(method_00,TypeInfo__System__Action);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated
                  >> 0xc);
    method_00 = (MVPlayer *)(ulonglong)(uVar3 & 0x3f);
    player = (MVPlayer *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      pMVar4 = player->klass;
      LOCK();
      bVar5 = pMVar4 == player->klass;
      if (bVar5) {
        player->klass = (MVPlayer__Class *)((ulonglong)pMVar4 | 1L << (longlong)method_00);
      }
      UNLOCK();
    } while (!bVar5);
  }
  if ((this->fields).awaitingSpawn != 0) {
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,(MethodInfo *)method_00);
    if (extraout_RAX != 0) {
      this_00 = *(SpawnRolesManager **)(extraout_RAX + 0x88);
      value = (Action_1_Int32_ *)FUN_?(TypeInfo__System__Action<int>);
      FUN_?(value,this);
      if (this_00 != (SpawnRolesManager *)0x0) {
        SpawnRolesManager::SpawnRolesManager_remove_OnSpawnRoleActivated
                  (this_00,value,(MethodInfo *)0x0);
        return;
      }
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}


/* Void OnDrag() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_OnDrag
               (SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = SpawnRoleMenu_CalculateNewSelectedItem(this,(MethodInfo *)0x0);
  if (uVar1 == (this->fields).selectedSpawnRole) {
    return;
  }
  pLVar2 = (this->fields).SelectionElementsList;
  if (pLVar2 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
    uVar3 = (this->fields).selectedSpawnRole;
    if ((uint)(pLVar2->fields)._size <= uVar3) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pDVar5 = (pLVar2->fields)._items;
    if (pDVar5 != (DefaultSpawnRoleSelectionElement__Array *)0x0) {
      if ((uint)pDVar5->max_length <= uVar3) {
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pDVar6 = pDVar5->vector[(int)uVar3];
      if (pDVar6 != (DefaultSpawnRoleSelectionElement *)0x0) {
        (*(pDVar6->klass->vtable).OnUnSelected.methodPtr)
                  (pDVar6,(pDVar6->klass->vtable).OnUnSelected.method);
        pLVar2 = (this->fields).SelectionElementsList;
        (this->fields).selectedSpawnRole = uVar1;
        if (pLVar2 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
          if ((uint)(pLVar2->fields)._size <= uVar1) goto code_?;
          pDVar5 = (pLVar2->fields)._items;
          if (pDVar5 != (DefaultSpawnRoleSelectionElement__Array *)0x0) {
            if ((uint)pDVar5->max_length <= uVar1) goto code_?;
            pDVar6 = pDVar5->vector[(int)uVar1];
            if (pDVar6 != (DefaultSpawnRoleSelectionElement *)0x0) {
              (*(pDVar6->klass->vtable).OnSelctionHighlight.methodPtr)
                        (pDVar6,(pDVar6->klass->vtable).OnSelctionHighlight.method);
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnEndDrag() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_OnEndDrag
               (SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<DefaultSpawnRoleSelectionElement>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<DefaultSpawnRoleSelectionElement>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<DefaultSpawnRoleSelectionElement>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  newSelectedSpawnRole = SpawnRoleMenu_CalculateNewSelectedItem(this,(MethodInfo *)0x0);
  SpawnRoleMenu_OnSpawnRoleSelected(this,newSelectedSpawnRole,(MethodInfo *)0x0);
  LStack_1._list = (List_1_System_Object_ *)(this->fields).SelectionElementsList;
  if ((List_1_DefaultSpawnRoleSelectionElement_ *)LStack_1._list ==
      (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)
                (uint)(((List_1_DefaultSpawnRoleSelectionElement_ *)LStack_1._list)->fields).
                      _version << 0x20);
  uStack_9 = 0;
  LStack_1._8_8_ = pLStack_8;
  LStack_1._current = (Object *)0x0;
  uStack_4 = 0;
  pLStack_8 = &LStack_1;
  while( true ) {
    bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_1,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<DefaultSpawnRoleSelectionElement>__MoveNext__
                      );
    if (bVar10 == 0) {
      return;
    }
    if (LStack_1._current == (Object *)0x0) break;
    *(undefined1 *)&LStack_1._current[6].monitor = 0;
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnPlayerPlanetDataUpdated() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_OnPlayerPlanetDataUpdated
               (SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<DefaultSpawnRoleSelectionElement>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<DefaultSpawnRoleSelectionElement>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<DefaultSpawnRoleSelectionElement>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).buttonController;
  pLVar1 = (this->fields).SelectionElementsList;
  uVar2 = (this->fields).selectedSpawnRole;
  if (pLVar1 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
    if ((uint)(pLVar1->fields)._size <= uVar2) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pDVar4 = (pLVar1->fields)._items;
    if (pDVar4 != (DefaultSpawnRoleSelectionElement__Array *)0x0) {
      if ((uint)pDVar4->max_length <= uVar2) {
        FUN_?();
code_?:
        FUN_?();
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pDVar5 = pDVar4->vector[(int)uVar2];
      if ((pDVar5 != (DefaultSpawnRoleSelectionElement *)0x0) &&
         (bVar6 = (*(pDVar5->klass->vtable).get_Tier.methodPtr)
                            (pDVar5,(pDVar5->klass->vtable).get_Tier.method),
         this_00 != (SpawnRoleSelectionButtonController *)0x0)) {
        SpawnRoleSelectionButtonController::
        SpawnRoleSelectionButtonController_OnNewSelectedSpawnRole
                  (this_00,(uint)bVar6,(MethodInfo *)0x0);
        LStack_7._list = (List_1_System_Object_ *)(this->fields).SelectionElementsList;
        if ((List_1_DefaultSpawnRoleSelectionElement_ *)LStack_7._list !=
            (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
          if (iRam_? != 0) {
            uVar2 = (uint)((ulonglong)&uStack_8 >> 0xc);
            puVar9 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar10 = *puVar9;
              LOCK();
              uVar11 = *puVar9;
              if (uVar10 == uVar11) {
                *puVar9 = uVar10 | 1L << (uVar2 & 0x3f);
              }
              UNLOCK();
            } while (uVar10 != uVar11);
          }
          pLStack_12 = (List_1_T_Enumerator_System_Object_ *)
                       ((ulonglong)
                        (uint)(((List_1_DefaultSpawnRoleSelectionElement_ *)LStack_7._list)->fields
                              )._version << 0x20);
          uStack_13 = 0;
          LStack_7._8_8_ = pLStack_12;
          LStack_7._current = (Object *)0x0;
          uStack_8 = 0;
          pLStack_12 = &LStack_7;
          while( true ) {
            bVar14 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              (&LStack_7,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<DefaultSpawnRoleSelectionElement>__MoveNext__
                              );
            if (bVar14 == 0) {
              return;
            }
            if (LStack_7._current == (Object *)0x0) break;
            (*(code *)(LStack_7._current)->klass[1]._0.fields)
                      (LStack_7._current,(LStack_7._current)->klass[1]._0.events);
          }
          goto code_?;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnPurchaseGamePassTier() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_OnPurchaseGamePassTier
               (SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<DefaultSpawnRoleSelectionElement>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<DefaultSpawnRoleSelectionElement>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<DefaultSpawnRoleSelectionElement>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).buttonController;
  pLVar1 = (this->fields).SelectionElementsList;
  uVar2 = (this->fields).selectedSpawnRole;
  if (pLVar1 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
    if ((uint)(pLVar1->fields)._size <= uVar2) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pDVar4 = (pLVar1->fields)._items;
    if (pDVar4 != (DefaultSpawnRoleSelectionElement__Array *)0x0) {
      if ((uint)pDVar4->max_length <= uVar2) {
        FUN_?();
code_?:
        FUN_?();
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pDVar5 = pDVar4->vector[(int)uVar2];
      if ((pDVar5 != (DefaultSpawnRoleSelectionElement *)0x0) &&
         (bVar6 = (*(pDVar5->klass->vtable).get_Tier.methodPtr)
                            (pDVar5,(pDVar5->klass->vtable).get_Tier.method),
         this_00 != (SpawnRoleSelectionButtonController *)0x0)) {
        SpawnRoleSelectionButtonController::
        SpawnRoleSelectionButtonController_OnNewSelectedSpawnRole
                  (this_00,(uint)bVar6,(MethodInfo *)0x0);
        LStack_7._list = (List_1_System_Object_ *)(this->fields).SelectionElementsList;
        if ((List_1_DefaultSpawnRoleSelectionElement_ *)LStack_7._list !=
            (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
          if (iRam_? != 0) {
            uVar2 = (uint)((ulonglong)&uStack_8 >> 0xc);
            puVar9 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar10 = *puVar9;
              LOCK();
              uVar11 = *puVar9;
              if (uVar10 == uVar11) {
                *puVar9 = uVar10 | 1L << (uVar2 & 0x3f);
              }
              UNLOCK();
            } while (uVar10 != uVar11);
          }
          pLStack_12 = (List_1_T_Enumerator_System_Object_ *)
                       ((ulonglong)
                        (uint)(((List_1_DefaultSpawnRoleSelectionElement_ *)LStack_7._list)->fields
                              )._version << 0x20);
          uStack_13 = 0;
          LStack_7._8_8_ = pLStack_12;
          LStack_7._current = (Object *)0x0;
          uStack_8 = 0;
          pLStack_12 = &LStack_7;
          while( true ) {
            bVar14 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              (&LStack_7,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<DefaultSpawnRoleSelectionElement>__MoveNext__
                              );
            if (bVar14 == 0) {
              return;
            }
            if (LStack_7._current == (Object *)0x0) break;
            (*(code *)(LStack_7._current)->klass[1]._0.fields)
                      (LStack_7._current,(LStack_7._current)->klass[1]._0.events);
          }
          goto code_?;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnScrollValueChange() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_OnScrollValueChange
               (SpawnRoleMenu *this,MethodInfo *method)

{
  pSVar1 = (this->fields).scrollbar;
  if (pSVar1 != (Scrollbar *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    OVar2.m_CachedPtr = (pSVar1->fields)._._._._._._.m_CachedPtr;
    if (OVar2.m_CachedPtr == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pSVar1,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    cVar5 = (*pcRam_?)(OVar2.m_CachedPtr);
    if (cVar5 == '\0') {
      return;
    }
    pSVar1 = (this->fields).scrollbar;
    if (pSVar1 != (Scrollbar *)0x0) {
      fVar6 = (pSVar1->fields).m_Value;
      if (1 < (pSVar1->fields).m_NumberOfSteps) {
        fVar6 = (float)FUN_?((float)((pSVar1->fields).m_NumberOfSteps + -1) * fVar6);
        fVar6 = fVar6 / (float)((pSVar1->fields).m_NumberOfSteps + -1);
      }
      if (fVar6 < 0.0) {
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Count__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pSVar1 = (this->fields).scrollbar;
      if (pSVar1 != (Scrollbar *)0x0) {
        fVar6 = (pSVar1->fields).m_Value;
        if (1 < (pSVar1->fields).m_NumberOfSteps) {
          fVar6 = (float)FUN_?((float)((pSVar1->fields).m_NumberOfSteps + -1) * fVar6);
          fVar6 = fVar6 / (float)((pSVar1->fields).m_NumberOfSteps + -1);
        }
        pLVar7 = (this->fields).SelectionElementsList;
        if (pLVar7 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
          iVar8 = FUN_?((float)(pLVar7->fields)._size * fVar6);
          newStartElement =
               FUN_?((float)iVar8 -
                             (float)(this->fields).maxSelectionElementsOnScreen * _UNK_?);
          pLVar7 = (this->fields).SelectionElementsList;
          if (pLVar7 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
            SpawnRoleMenu_HideElements
                      (this,(this->fields).currentSelectionStartIndex,(pLVar7->fields)._size,
                       newStartElement,(MethodInfo *)0x0);
            SpawnRoleMenu_ShowElements(this,newStartElement,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnSelectButtonPressed() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_OnSelectButtonPressed
               (SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SpawnRoleMenu);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Equality_int__MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).SelectionElementsList;
  if (pLVar1 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
    uVar2 = (this->fields).selectedSpawnRole;
    if ((uint)(pLVar1->fields)._size <= uVar2) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    player = (pLVar1->fields)._items;
    if (player != (DefaultSpawnRoleSelectionElement__Array *)0x0) {
      if (*(uint *)&player->max_length <= uVar2) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (player->vector[(int)uVar2] != (DefaultSpawnRoleSelectionElement *)0x0) {
        spawnRoleId = (player->vector[(int)uVar2]->fields).woId;
        MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)player,in_R8);
        if ((extraout_RAX != 0) && (*(longlong *)(extraout_RAX + 200) != 0)) {
          cVar4 = FUN_?(spawnRoleId,
                                 *(undefined8 *)(*(longlong *)(extraout_RAX + 200) + 0x30));
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar5 = (MVPlayer *)TypeInfo__MVGameControllerBase->static_fields;
          pMVar6 = (MVGameControllerBase *)(pMVar5->fields).OnLevelChanged;
          if (((pMVar6 != (MVGameControllerBase *)0x0) &&
              (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
             (pMVar8 = (pMVar7->fields).teamManager, pMVar8 != (MVTeamManager *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pDVar9 = (pMVar8->fields).teams;
            if (pDVar9 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
              if (1 < (pDVar9->fields)._count - (pDVar9->fields)._freeCount) {
                in_R8 = (MethodInfo *)0x0;
                pMVar5 = (MVPlayer *)(ulonglong)spawnRoleId;
                SpawnRoleMenu_HandleTeamSwitching(this,spawnRoleId,(MethodInfo *)0x0);
              }
              if (cVar4 != '\0') {
                SpawnRoleMenu_Close(this,0,(MethodInfo *)0x0);
                (*(this->klass->vtable).StartPlaying.methodPtr)
                          (this,(this->klass->vtable).StartPlaying.method);
                return;
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__System__Action<int>);
                LOCK();
                UNLOCK();
                FUN_?();
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              (this->fields).awaitingSpawn = 1;
              MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar5,in_R8);
              if (extraout_RAX_00 != 0) {
                this_00 = *(SpawnRolesManager **)(extraout_RAX_00 + 0x88);
                pMVar5 = (MVPlayer *)FUN_?(TypeInfo__System__Action<int>);
                FUN_?(pMVar5,this);
                if (this_00 != (SpawnRolesManager *)0x0) {
                  pMVar10 = (MethodInfo *)0x0;
                  SpawnRolesManager::SpawnRolesManager_add_OnSpawnRoleActivated
                            (this_00,(Action_1_Int32_ *)pMVar5,(MethodInfo *)0x0);
                  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar5,pMVar10);
                  if (extraout_RAX_01 != 0) {
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    if ((*(longlong *)(extraout_RAX_01 + 0x90) != 0) &&
                       (this_01 = *(Dictionary_2_System_Int32Enum_System_Int32Enum_ **)
                                   (*(longlong *)(extraout_RAX_01 + 0x90) + 0x10),
                       this_01 != (Dictionary_2_System_Int32Enum_System_Int32Enum_ *)0x0)) {
                      IVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                               Int32Enum,System::Int32Enum]::
                               Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                                         (this_01,0,
                                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                                         );
                      if (spawnRoleId == IVar11) {
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__MVGameControllerBase);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
                        if (((pMVar6 == (MVGameControllerBase *)0x0) ||
                            (pMVar7 = (pMVar6->fields).game, pMVar7 == (MVNetworkGame *)0x0)) ||
                           ((pMVar12 = (pMVar7->fields).playerContainer,
                            pMVar12 == (MVPlayerContainer *)0x0 ||
                            (pMVar13 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                                 (pMVar12,(MethodInfo *)0x0),
                            pMVar13 == (MVLocalPlayer *)0x0)))) goto code_?;
                        pMVar10 = (MethodInfo *)0x0;
                        pMVar5 = (MVPlayer *)(ulonglong)spawnRoleId;
                        MVLocalPlayer::MVLocalPlayer_SetActiveSpawnRole
                                  (pMVar13,spawnRoleId,(MethodInfo *)0x0);
                        if (TypeInfo__SpawnRoleMenu->static_fields->OnNewSpawnRoleSelected !=
                            (Action_1_Int32_ *)0x0) {
                          pAVar14 = TypeInfo__SpawnRoleMenu->static_fields->OnNewSpawnRoleSelected;
                          MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar5,pMVar10);
                          if (this_02 == (MVLocalPlayer *)0x0) goto code_?;
                          iVar15 = MVLocalPlayer::MVLocalPlayer_get_DefaultSpawnRoleId
                                             (this_02,(MethodInfo *)0x0);
                          (*(pAVar14->fields)._._.invoke_impl)
                                    ((pAVar14->fields)._._.method_code,iVar15,
                                     (pAVar14->fields)._._.method);
                        }
                      }
                      else {
                        pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game
                                            ((MethodInfo *)0x0);
                        if (((pMVar7 == (MVNetworkGame *)0x0) ||
                            (pMVar12 = (pMVar7->fields).playerContainer,
                            pMVar12 == (MVPlayerContainer *)0x0)) ||
                           (pMVar13 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                                (pMVar12,(MethodInfo *)0x0),
                           pMVar13 == (MVLocalPlayer *)0x0)) goto code_?;
                        MVLocalPlayer::MVLocalPlayer_CreateSpawnRole
                                  (pMVar13,spawnRoleId,(MethodInfo *)0x0);
                        if (TypeInfo__SpawnRoleMenu->static_fields->OnNewSpawnRoleSelected !=
                            (Action_1_Int32_ *)0x0) {
                          pAVar14 = TypeInfo__SpawnRoleMenu->static_fields->OnNewSpawnRoleSelected;
                          (*(pAVar14->fields)._._.invoke_impl)
                                    ((pAVar14->fields)._._.method_code,spawnRoleId,
                                     (pAVar14->fields)._._.method);
                        }
                      }
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__FirstTimePressPlayController);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      if (TypeInfo__FirstTimePressPlayController->static_fields->haveBeenPressed ==
                          0) {
                        FirstTimePressPlayController::
                        FirstTimePressPlayController_OnFirstTimePlayIsPressed((MethodInfo *)0x0);
                      }
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__ILockCursorManager);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__MVGameControllerBase);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      if (TypeInfo__MVGameControllerBase->static_fields->
                          _WebPlayAsTouch_k__BackingField == 0) {
                        pMVar16 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance
                                            ((MethodInfo *)0x0);
                        if ((pMVar16 == (MVGameControllerDesktop *)0x0) ||
                           (pIVar17 = (pMVar16->fields).lockCursorManager,
                           pIVar17 == (ILockCursorManager *)0x0)) goto code_?;
                        FUN_?(2,TypeInfo__ILockCursorManager,pIVar17,1);
                      }
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
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnSpawnRoleActivated(Int32) */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_OnSpawnRoleActivated
               (SpawnRoleMenu *this,int32_t newSelectedSpawnRole,MethodInfo *method)

{
  if (cRam_? == '\0') {
    puStackY_30 = &UNK_?;
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                  ,CONCAT44(in_register_00000014,newSelectedSpawnRole));
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).SelectionElementsList;
  if (pLVar1 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
    uVar2 = (this->fields).selectedSpawnRole;
    if ((uint)(pLVar1->fields)._size <= uVar2) {
      puStackY_30 = &UNK_?;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    pDVar3 = (pLVar1->fields)._items;
    if (pDVar3 != (DefaultSpawnRoleSelectionElement__Array *)0x0) {
      if ((uint)pDVar3->max_length <= uVar2) {
        puStackY_30 = &UNK_?;
        FUN_?();
        UNRECOVERED_JUMPTABLE = (code *)swi(3);
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      pDVar4 = pDVar3->vector[(int)uVar2];
      if (pDVar4 != (DefaultSpawnRoleSelectionElement *)0x0) {
        puStackY_30 = &UNK_?;
        bVar5 = (*(pDVar4->klass->vtable).get_Tier.methodPtr)
                           (pDVar4,(pDVar4->klass->vtable).get_Tier.method);
        if (cRam_? == '\0') {
          puStackY_30 = &UNK_?;
          FUN_?(&TypeInfo__GamePassesManager);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pPVar6 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
        if (pPVar6 != (PlayerPlanetData *)0x0) {
          bVar7 = (pPVar6->fields).gamePassTier;
          if (bVar5 <= bVar7) {
            if (cRam_? == '\0') {
              puStackY_30 = &UNK_?;
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                            ,0);
              LOCK();
              UNLOCK();
              puStackY_30 = &UNK_?;
              FUN_?(&TypeInfo__SpawnRoleMenu);
              LOCK();
              UNLOCK();
              puStackY_30 = &UNK_?;
              FUN_?(&
                            MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Equality_int__MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pLVar1 = (this->fields).SelectionElementsList;
            if (pLVar1 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
              uVar2 = (this->fields).selectedSpawnRole;
              if ((uint)(pLVar1->fields)._size <= uVar2) {
                puStackY_30 = &UNK_?;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                UNRECOVERED_JUMPTABLE = (code *)swi(3);
                (*UNRECOVERED_JUMPTABLE)();
                return;
              }
              pDVar3 = (pLVar1->fields)._items;
              if (pDVar3 != (DefaultSpawnRoleSelectionElement__Array *)0x0) {
                if (*(uint *)&pDVar3->max_length <= uVar2) {
                  puStackY_30 = &UNK_?;
                  FUN_?();
                  UNRECOVERED_JUMPTABLE = (code *)swi(3);
                  (*UNRECOVERED_JUMPTABLE)();
                  return;
                }
                if (pDVar3->vector[(int)uVar2] != (DefaultSpawnRoleSelectionElement *)0x0) {
                  spawnRoleId = (pDVar3->vector[(int)uVar2]->fields).woId;
                  puStackY_30 = &UNK_?;
                  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)pDVar3,method);
                  if ((extraout_RAX != 0) && (*(longlong *)(extraout_RAX + 200) != 0)) {
                    puStackY_30 = &UNK_?;
                    cVar8 = FUN_?(spawnRoleId,
                                           *(undefined8 *)(*(longlong *)(extraout_RAX + 200) + 0x30)
                                          );
                    if (cRam_? == '\0') {
                      puStackY_30 = &UNK_?;
                      FUN_?(&TypeInfo__MVGameControllerBase);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pMVar9 = (MVPlayer *)TypeInfo__MVGameControllerBase->static_fields;
                    pMVar10 = (MVGameControllerBase *)(pMVar9->fields).OnLevelChanged;
                    if (((pMVar10 != (MVGameControllerBase *)0x0) &&
                        (pMVar11 = (pMVar10->fields).game, pMVar11 != (MVNetworkGame *)0x0)) &&
                       (pMVar12 = (pMVar11->fields).teamManager, pMVar12 != (MVTeamManager *)0x0)) {
                      if (cRam_? == '\0') {
                        puStackY_30 = &UNK_?;
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pDVar13 = (pMVar12->fields).teams;
                      if (pDVar13 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)
                                    0x0) {
                        if (1 < (pDVar13->fields)._count - (pDVar13->fields)._freeCount) {
                          method = (MethodInfo *)0x0;
                          pMVar9 = (MVPlayer *)(ulonglong)spawnRoleId;
                          puStackY_30 = &UNK_?;
                          SpawnRoleMenu_HandleTeamSwitching(this,spawnRoleId,(MethodInfo *)0x0);
                        }
                        if (cVar8 != '\0') {
                          puStackY_30 = &UNK_?;
                          SpawnRoleMenu_Close(this,0,(MethodInfo *)0x0);
                          puStackY_30 = &UNK_?;
                          (*(this->klass->vtable).StartPlaying.methodPtr)
                                    (this,(this->klass->vtable).StartPlaying.method);
                          return;
                        }
                        if (cRam_? == '\0') {
                          puStackY_30 = &UNK_?;
                          FUN_?(&TypeInfo__System__Action<int>);
                          LOCK();
                          UNLOCK();
                          puStackY_30 = &UNK_?;
                          FUN_?();
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        (this->fields).awaitingSpawn = 1;
                        puStackY_30 = &UNK_?;
                        MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar9,method);
                        if (extraout_RAX_00 != 0) {
                          this_00 = *(SpawnRolesManager **)(extraout_RAX_00 + 0x88);
                          puStackY_30 = &UNK_?;
                          pMVar9 = (MVPlayer *)FUN_?(TypeInfo__System__Action<int>);
                          puStackY_30 = &UNK_?;
                          FUN_?(pMVar9,this);
                          if (this_00 != (SpawnRolesManager *)0x0) {
                            pMVar14 = (MethodInfo *)0x0;
                            puStackY_30 = &UNK_?;
                            SpawnRolesManager::SpawnRolesManager_add_OnSpawnRoleActivated
                                      (this_00,(Action_1_Int32_ *)pMVar9,(MethodInfo *)0x0);
                            puStackY_30 = &UNK_?;
                            MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar9,pMVar14);
                            if (extraout_RAX_01 != 0) {
                              if (cRam_? == '\0') {
                                puStackY_30 = &UNK_?;
                                FUN_?(&
                                              MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                                             );
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              if ((*(longlong *)(extraout_RAX_01 + 0x90) != 0) &&
                                 (this_01 = *(Dictionary_2_System_Int32Enum_System_Int32Enum_ **)
                                             (*(longlong *)(extraout_RAX_01 + 0x90) + 0x10),
                                 this_01 != (Dictionary_2_System_Int32Enum_System_Int32Enum_ *)0x0))
                              {
                                puStackY_30 = &UNK_?;
                                IVar15 = mscorlib.dll::System::Collections::Generic::
                                         Dictionary`2[System::Int32Enum,System::Int32Enum]::
                                         Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                                                   (this_01,0,
                                                                                                        
                                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                                                  );
                                if (spawnRoleId == IVar15) {
                                  if (cRam_? == '\0') {
                                    puStackY_30 = &UNK_?;
                                    FUN_?(&TypeInfo__MVGameControllerBase);
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
                                  if (((pMVar10 == (MVGameControllerBase *)0x0) ||
                                      (pMVar11 = (pMVar10->fields).game,
                                      pMVar11 == (MVNetworkGame *)0x0)) ||
                                     (pMVar16 = (pMVar11->fields).playerContainer,
                                     pMVar16 == (MVPlayerContainer *)0x0)) goto code_?;
                                  puStackY_30 = &UNK_?;
                                  pMVar17 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                                      (pMVar16,(MethodInfo *)0x0);
                                  if (pMVar17 == (MVLocalPlayer *)0x0) goto code_?;
                                  pMVar14 = (MethodInfo *)0x0;
                                  pMVar9 = (MVPlayer *)(ulonglong)spawnRoleId;
                                  puStackY_30 = &UNK_?;
                                  MVLocalPlayer::MVLocalPlayer_SetActiveSpawnRole
                                            (pMVar17,spawnRoleId,(MethodInfo *)0x0);
                                  if (TypeInfo__SpawnRoleMenu->static_fields->OnNewSpawnRoleSelected
                                      != (Action_1_Int32_ *)0x0) {
                                    pAVar18 = TypeInfo__SpawnRoleMenu->static_fields->
                                             OnNewSpawnRoleSelected;
                                    puStackY_30 = &UNK_?;
                                    MVTriggerBox::MVTriggerBox_OnExit
                                              ((MVTriggerBox *)0x0,pMVar9,pMVar14);
                                    if (this_02 == (MVLocalPlayer *)0x0) goto code_?;
                                    puStackY_30 = &UNK_?;
                                    iVar19 = MVLocalPlayer::MVLocalPlayer_get_DefaultSpawnRoleId
                                                       (this_02,(MethodInfo *)0x0);
                                    puStackY_30 = &UNK_?;
                                    (*(pAVar18->fields)._._.invoke_impl)
                                              ((pAVar18->fields)._._.method_code,iVar19,
                                               (pAVar18->fields)._._.method);
                                  }
                                }
                                else {
                                  puStackY_30 = &UNK_?;
                                  pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                      ((MethodInfo *)0x0);
                                  if ((pMVar11 == (MVNetworkGame *)0x0) ||
                                     (pMVar16 = (pMVar11->fields).playerContainer,
                                     pMVar16 == (MVPlayerContainer *)0x0)) goto code_?;
                                  puStackY_30 = &UNK_?;
                                  pMVar17 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                                      (pMVar16,(MethodInfo *)0x0);
                                  if (pMVar17 == (MVLocalPlayer *)0x0) goto code_?;
                                  puStackY_30 = &UNK_?;
                                  MVLocalPlayer::MVLocalPlayer_CreateSpawnRole
                                            (pMVar17,spawnRoleId,(MethodInfo *)0x0);
                                  if (TypeInfo__SpawnRoleMenu->static_fields->OnNewSpawnRoleSelected
                                      != (Action_1_Int32_ *)0x0) {
                                    pAVar18 = TypeInfo__SpawnRoleMenu->static_fields->
                                             OnNewSpawnRoleSelected;
                                    puStackY_30 = &UNK_?;
                                    (*(pAVar18->fields)._._.invoke_impl)
                                              ((pAVar18->fields)._._.method_code,spawnRoleId,
                                               (pAVar18->fields)._._.method);
                                  }
                                }
                                if (cRam_? == '\0') {
                                  puStackY_30 = &UNK_?;
                                  FUN_?(&TypeInfo__FirstTimePressPlayController);
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                if (TypeInfo__FirstTimePressPlayController->static_fields->
                                    haveBeenPressed == 0) {
                                  puStackY_30 = &UNK_?;
                                  FirstTimePressPlayController::
                                  FirstTimePressPlayController_OnFirstTimePlayIsPressed
                                            ((MethodInfo *)0x0);
                                }
                                if (cRam_? == '\0') {
                                  puStackY_30 = &UNK_?;
                                  FUN_?(&TypeInfo__ILockCursorManager);
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                if (cRam_? == '\0') {
                                  puStackY_30 = &UNK_?;
                                  FUN_?(&TypeInfo__MVGameControllerBase);
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                if (TypeInfo__MVGameControllerBase->static_fields->
                                    _WebPlayAsTouch_k__BackingField == 0) {
                                  puStackY_30 = &UNK_?;
                                  pMVar20 = MVGameControllerDesktop::
                                            MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
                                  if ((pMVar20 == (MVGameControllerDesktop *)0x0) ||
                                     (pIVar21 = (pMVar20->fields).lockCursorManager,
                                     pIVar21 == (ILockCursorManager *)0x0))
                                  goto code_?;
                                  puStackY_30 = &UNK_?;
                                  FUN_?(2,TypeInfo__ILockCursorManager,pIVar21,1);
                                }
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
code_?:
            puStackY_30 = &UNK_?;
            FUN_?();
            UNRECOVERED_JUMPTABLE = (code *)swi(3);
            (*UNRECOVERED_JUMPTABLE)();
            return;
          }
          if (bVar5 == (byte)(bVar7 + 1)) {
            if (cRam_? == '\0') {
              puStackY_30 = &UNK_?;
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pGVar22 = TypeInfo__MVGameControllerBase->static_fields->
                      _GameSessionData_k__BackingField;
            if (pGVar22 != (GameSessionData *)0x0) {
              if ((pGVar22->fields).gameMode != 0) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                ,0);
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                               );
                  LOCK();
                  UNLOCK();
                  FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                  LOCK();
                  UNLOCK();
                  FUN_?(&TypeInfo__GamePassesManager);
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                               );
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                TierUnlockDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockDetailsPopup>_TierUnlockDetailsPopup_
                               );
                  LOCK();
                  UNLOCK();
                  FUN_?(&TypeInfo__UnityEngine__Object);
                  LOCK();
                  UNLOCK();
                  FUN_?(&MethodInfo__SpawnRoleMenu__OnPurchaseGamePassTier__);
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                MethodInfo__SpawnRoleMenu____c__DisplayClass56_0___ShowTierPurchase_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                               );
                  LOCK();
                  UNLOCK();
                  FUN_?(&TypeInfo__SpawnRoleMenu____c__DisplayClass56_0);
                  LOCK();
                  UNLOCK();
                  FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pOVar23 = (Object *)FUN_?(TypeInfo__SpawnRoleMenu____c__DisplayClass56_0);
                pLVar1 = (this->fields).SelectionElementsList;
                if (pLVar1 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
                  uVar2 = (this->fields).selectedSpawnRole;
                  if ((uint)(pLVar1->fields)._size <= uVar2) {
                    mscorlib.dll::System::ThrowHelper::
                    ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                    UNRECOVERED_JUMPTABLE = (code *)swi(3);
                    (*UNRECOVERED_JUMPTABLE)();
                    return;
                  }
                  pDVar3 = (pLVar1->fields)._items;
                  if (pDVar3 != (DefaultSpawnRoleSelectionElement__Array *)0x0) {
                    if ((uint)pDVar3->max_length <= uVar2) {
                      FUN_?();
                      UNRECOVERED_JUMPTABLE = (code *)swi(3);
                      (*UNRECOVERED_JUMPTABLE)();
                      return;
                    }
                    pDVar4 = pDVar3->vector[(int)uVar2];
                    if (pDVar4 != (DefaultSpawnRoleSelectionElement *)0x0) {
                      bVar5 = (*(pDVar4->klass->vtable).get_Tier.methodPtr)
                                         (pDVar4,(pDVar4->klass->vtable).get_Tier.method);
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__GamePassesManager);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pPVar6 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
                      if (pPVar6 != (PlayerPlanetData *)0x0) {
                        iVar19 = (pPVar6->fields).progressionGamePoints;
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__GamePassesManager);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pPVar6 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
                        if (pPVar6 != (PlayerPlanetData *)0x0) {
                          pPVar24 = TypeInfo__GamePassesManager->static_fields->
                                    playerTierStateCalculator;
                          bVar7 = (pPVar6->fields).gamePassTier;
                          if (pPVar24 != (PlayerTierStateCalculator *)0x0) {
                            if ((pPVar24->fields).gamePointVelocityIsZero == 0) {
                              pDVar25 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::
                                        PlayerTierStateCalculator::
                                        PlayerTierStateCalculator_GetTierPricingStateBasedOnUserGamePointAmount
                                                  (pPVar24,iVar19,(uint)bVar7,(MethodInfo *)0x0);
                            }
                            else {
                              pDVar25 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::
                                        PlayerTierStateCalculator::
                                        PlayerTierStateCalculator_GetTierPricingStateBasedOnUserTier
                                                  (pPVar24,(uint)bVar7,(MethodInfo *)0x0);
                            }
                            if ((pDVar25 !=
                                 (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                                  *)0x0) &&
                               (pOVar26 = mscorlib.dll::System::Collections::Generic::
                                          Dictionary`2[System::ByteEnum,System::Object]::
                                          Dictionary_2_System_ByteEnum_System_Object__get_Item
                                                    ((Dictionary_2_System_ByteEnum_System_Object_ *)
                                                     pDVar25,(uint)bVar5,
                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                                  ), pOVar26 != (Object *)0x0)) {
                              iVar19 = *(int32_t *)&pOVar26[1].monitor;
                              original = (this->fields).tierUnlockPopupPrefab;
                              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                                FUN_?();
                              }
                              pOVar27 = (Object__Class *)
                                        UnityEngine.CoreModule.dll::UnityEngine::Object::
                                        Object_1_Instantiate_4
                                                  ((Object *)original,
                                                                                                      
                                                  TierUnlockDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockDetailsPopup>_TierUnlockDetailsPopup_
                                                  );
                              if (pOVar23 != (Object *)0x0) {
                                bVar28 = iRam_? != 0;
                                pOVar23[1].klass = pOVar27;
                                if (bVar28) {
                                  uVar2 = (uint)((ulonglong)(pOVar23 + 1) >> 0xc);
                                  puVar29 = (ulonglong *)
                                           ((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR)
                                  ;
                                  do {
                                    uVar30 = *puVar29;
                                    LOCK();
                                    uVar31 = *puVar29;
                                    if (uVar30 == uVar31) {
                                      *puVar29 = uVar30 | 1L << (uVar2 & 0x3f);
                                    }
                                    UNLOCK();
                                  } while (uVar30 != uVar31);
                                }
                                pGVar32 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                          Component_get_gameObject
                                                    ((Component *)this,(MethodInfo *)0x0);
                                pEVar33 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                                          FUN_?(
                                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                                  );
                                UnityEngine.UI.dll::UnityEngine::EventSystems::
                                ExecuteEvents+EventFunction`1[System::Object]::
                                ExecuteEvents_EventFunction_1_System_Object___ctor
                                          (pEVar33,pOVar23,
                                           MethodInfo__SpawnRoleMenu____c__DisplayClass56_0___ShowTierPurchase_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                                           ,(MethodInfo *)0x0);
                                if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1
                                             ).field_0x1c == 0) {
                                  FUN_?();
                                }
                                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                                ExecuteEvents_ExecuteHierarchy
                                          (pGVar32,(BaseEventData *)0x0,pEVar33,
                                           UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                                          );
                                pOVar27 = pOVar23[1].klass;
                                pNVar34 = (NavMesh_OnNavMeshPreUpdate *)
                                          FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
                                UnityEngine.AIModule.dll::UnityEngine::AI::
                                NavMesh+OnNavMeshPreUpdate::NavMesh_OnNavMeshPreUpdate__ctor
                                          (pNVar34,(Object *)this,
                                           MethodInfo__SpawnRoleMenu__OnPurchaseGamePassTier__,
                                           (MethodInfo *)0x0);
                                if (pOVar27 != (Object__Class *)0x0) {
                                  TierUnlockDetailsPopup::TierUnlockDetailsPopup_Initialize
                                            ((TierUnlockDetailsPopup *)pOVar27,(uint)bVar5,iVar19,
                                             (UnityAction *)pNVar34,(MethodInfo *)0x0);
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
                FUN_?();
                UNRECOVERED_JUMPTABLE = (code *)swi(3);
                (*UNRECOVERED_JUMPTABLE)();
                return;
              }
              goto code_?;
            }
          }
          else {
            if (cRam_? == '\0') {
              puStackY_30 = &UNK_?;
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pGVar22 = TypeInfo__MVGameControllerBase->static_fields->
                      _GameSessionData_k__BackingField;
            if (pGVar22 != (GameSessionData *)0x0) {
              if ((pGVar22->fields).gameMode != 0) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                ,0);
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                               );
                  LOCK();
                  UNLOCK();
                  FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                               );
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                TierLockedDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierLockedDetailsPopup>_TierLockedDetailsPopup_
                               );
                  LOCK();
                  UNLOCK();
                  FUN_?(&TypeInfo__UnityEngine__Object);
                  LOCK();
                  UNLOCK();
                  FUN_?(&MethodInfo__SpawnRoleMenu__OnPurchaseGamePassTier__);
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                MethodInfo__SpawnRoleMenu____c__DisplayClass57_0___ShowLockedTierPurchase_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                               );
                  LOCK();
                  UNLOCK();
                  FUN_?(&TypeInfo__SpawnRoleMenu____c__DisplayClass57_0);
                  LOCK();
                  UNLOCK();
                  FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pOVar23 = (Object *)FUN_?(TypeInfo__SpawnRoleMenu____c__DisplayClass57_0);
                pLVar1 = (this->fields).SelectionElementsList;
                if (pLVar1 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
                  uVar2 = (this->fields).selectedSpawnRole;
                  if ((uint)(pLVar1->fields)._size <= uVar2) {
                    mscorlib.dll::System::ThrowHelper::
                    ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                    UNRECOVERED_JUMPTABLE = (code *)swi(3);
                    (*UNRECOVERED_JUMPTABLE)();
                    return;
                  }
                  pDVar3 = (pLVar1->fields)._items;
                  if (pDVar3 != (DefaultSpawnRoleSelectionElement__Array *)0x0) {
                    if ((uint)pDVar3->max_length <= uVar2) {
                      FUN_?();
                      UNRECOVERED_JUMPTABLE = (code *)swi(3);
                      (*UNRECOVERED_JUMPTABLE)();
                      return;
                    }
                    pDVar4 = pDVar3->vector[(int)uVar2];
                    if (pDVar4 != (DefaultSpawnRoleSelectionElement *)0x0) {
                      bVar5 = (*(pDVar4->klass->vtable).get_Tier.methodPtr)
                                         (pDVar4,(pDVar4->klass->vtable).get_Tier.method);
                      original_00 = (this->fields).tierLockedPopupPrefab;
                      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      pOVar27 = (Object__Class *)
                                UnityEngine.CoreModule.dll::UnityEngine::Object::
                                Object_1_Instantiate_4
                                          ((Object *)original_00,
                                           TierLockedDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierLockedDetailsPopup>_TierLockedDetailsPopup_
                                          );
                      if (pOVar23 != (Object *)0x0) {
                        bVar28 = iRam_? != 0;
                        pOVar23[1].klass = pOVar27;
                        if (bVar28) {
                          uVar2 = (uint)((ulonglong)(pOVar23 + 1) >> 0xc);
                          lVar35 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                          do {
                            uVar31 = *(ulonglong *)(lVar35 + 0xADDR);
                            puVar29 = (ulonglong *)(lVar35 + 0xADDR);
                            LOCK();
                            bVar28 = uVar31 == *puVar29;
                            if (bVar28) {
                              *puVar29 = uVar31 | 1L << (uVar2 & 0x3f);
                            }
                            UNLOCK();
                          } while (!bVar28);
                        }
                        pGVar32 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                        pEVar33 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                                  FUN_?(
                                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                               );
                        UnityEngine.UI.dll::UnityEngine::EventSystems::
                        ExecuteEvents+EventFunction`1[System::Object]::
                        ExecuteEvents_EventFunction_1_System_Object___ctor
                                  (pEVar33,pOVar23,
                                   MethodInfo__SpawnRoleMenu____c__DisplayClass57_0___ShowLockedTierPurchase_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                                   ,(MethodInfo *)0x0);
                        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                                     field_0x1c == 0) {
                          FUN_?();
                        }
                        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                        ExecuteEvents_ExecuteHierarchy
                                  (pGVar32,(BaseEventData *)0x0,pEVar33,
                                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                                  );
                        pOVar27 = pOVar23[1].klass;
                        pNVar34 = (NavMesh_OnNavMeshPreUpdate *)
                                  FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
                        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                        NavMesh_OnNavMeshPreUpdate__ctor
                                  (pNVar34,(Object *)this,
                                   MethodInfo__SpawnRoleMenu__OnPurchaseGamePassTier__,
                                   (MethodInfo *)0x0);
                        if (pOVar27 != (Object__Class *)0x0) {
                          bVar28 = iRam_? != 0;
                          *(byte *)&(pOVar27->_0).generic_class = bVar5;
                          (pOVar27->_0).typeMetadataHandle = (Il2CppMetadataTypeHandle)pNVar34;
                          if (bVar28) {
                            uVar2 = (uint)((ulonglong)&(pOVar27->_0).typeMetadataHandle >> 0xc);
                            lVar35 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                            do {
                              uVar31 = *(ulonglong *)(lVar35 + 0xADDR);
                              puVar29 = (ulonglong *)(lVar35 + 0xADDR);
                              LOCK();
                              bVar28 = uVar31 == *puVar29;
                              if (bVar28) {
                                *puVar29 = uVar31 | 1L << (uVar2 & 0x3f);
                              }
                              UNLOCK();
                            } while (!bVar28);
                          }
                          pTVar36 = (Text *)(pOVar27->_0).byval_arg.data.array;
                          if (cRam_? == '\0') {
                            FUN_?(&TypeInfo__System__Number);
                            LOCK();
                            UNLOCK();
                            FUN_?(&
                                          MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                               ->klass->field_0x135 & 1) == 0) {
                            FUN_?();
                          }
                          if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                            FUN_?();
                          }
                          auStackY_38 = (undefined1  [8])0x0;
                          puStackY_30 = (undefined *)0x0;
                          pSVar37 = mscorlib.dll::System::Number::Number_FormatInt32
                                              ((uint)bVar5,(ReadOnlySpan_1_Char_ *)auStackY_38,
                                               (IFormatProvider *)0x0,(MethodInfo *)0x0);
                          if (pTVar36 != (Text *)0x0) {
                            (*(pTVar36->klass->vtable).set_text.methodPtr)
                                      (pTVar36,pSVar37,(pTVar36->klass->vtable).set_text.method);
                            TierLockedDetailsPopup::TierLockedDetailsPopup_UpdateLockedText
                                      ((TierLockedDetailsPopup *)pOVar27,(MethodInfo *)0x0);
                            if (cRam_? == '\0') {
                              FUN_?(&TypeInfo__GamePassesManager);
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            if (TypeInfo__GamePassesManager->static_fields->
                                _GamePassesActive_k__BackingField != 0) {
                              TierLockedDetailsPopup::TierLockedDetailsPopup_UpdateTierProgressBar
                                        ((TierLockedDetailsPopup *)pOVar27,(MethodInfo *)0x0);
                            }
                            return;
                          }
                        }
                      }
                    }
                  }
                }
                FUN_?();
                UNRECOVERED_JUMPTABLE = (code *)swi(3);
                (*UNRECOVERED_JUMPTABLE)();
                return;
              }
code_?:
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                              ,0);
                LOCK();
                UNLOCK();
                FUN_?(&
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__GamePassesManager);
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              TierTestDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierTestDetailsPopup>_TierTestDetailsPopup_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__UnityEngine__Object);
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__SpawnRoleMenu____c__DisplayClass58_0___ShowTestTier_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__SpawnRoleMenu____c__DisplayClass58_0);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pOVar23 = (Object *)FUN_?(TypeInfo__SpawnRoleMenu____c__DisplayClass58_0);
              pLVar1 = (this->fields).SelectionElementsList;
              if (pLVar1 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
                uVar2 = (this->fields).selectedSpawnRole;
                if ((uint)(pLVar1->fields)._size <= uVar2) {
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                  UNRECOVERED_JUMPTABLE = (code *)swi(3);
                  (*UNRECOVERED_JUMPTABLE)();
                  return;
                }
                pDVar3 = (pLVar1->fields)._items;
                if (pDVar3 != (DefaultSpawnRoleSelectionElement__Array *)0x0) {
                  if ((uint)pDVar3->max_length <= uVar2) {
                    FUN_?();
                    UNRECOVERED_JUMPTABLE = (code *)swi(3);
                    (*UNRECOVERED_JUMPTABLE)();
                    return;
                  }
                  pDVar4 = pDVar3->vector[(int)uVar2];
                  if (pDVar4 != (DefaultSpawnRoleSelectionElement *)0x0) {
                    bVar5 = (*(pDVar4->klass->vtable).get_Tier.methodPtr)
                                       (pDVar4,(pDVar4->klass->vtable).get_Tier.method);
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__GamePassesManager);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pPVar6 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
                    if (pPVar6 != (PlayerPlanetData *)0x0) {
                      iVar19 = (pPVar6->fields).progressionGamePoints;
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__GamePassesManager);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pPVar6 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
                      if (pPVar6 != (PlayerPlanetData *)0x0) {
                        pPVar24 = TypeInfo__GamePassesManager->static_fields->
                                  playerTierStateCalculator;
                        bVar7 = (pPVar6->fields).gamePassTier;
                        if (pPVar24 != (PlayerTierStateCalculator *)0x0) {
                          if ((pPVar24->fields).gamePointVelocityIsZero == 0) {
                            pDVar25 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::
                                      PlayerTierStateCalculator::
                                      PlayerTierStateCalculator_GetTierPricingStateBasedOnUserGamePointAmount
                                                (pPVar24,iVar19,(uint)bVar7,(MethodInfo *)0x0);
                          }
                          else {
                            pDVar25 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::
                                      PlayerTierStateCalculator::
                                      PlayerTierStateCalculator_GetTierPricingStateBasedOnUserTier
                                                (pPVar24,(uint)bVar7,(MethodInfo *)0x0);
                          }
                          if ((pDVar25 !=
                               (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                                *)0x0) &&
                             (pOVar26 = mscorlib.dll::System::Collections::Generic::
                                        Dictionary`2[System::ByteEnum,System::Object]::
                                        Dictionary_2_System_ByteEnum_System_Object__get_Item
                                                  ((Dictionary_2_System_ByteEnum_System_Object_ *)
                                                   pDVar25,(uint)bVar5,
                                                                                                      
                                                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                                  ), pOVar26 != (Object *)0x0)) {
                            original_01 = (this->fields).tierTestPopupPrefab;
                            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                              FUN_?();
                            }
                            pOVar27 = (Object__Class *)
                                      UnityEngine.CoreModule.dll::UnityEngine::Object::
                                      Object_1_Instantiate_4
                                                ((Object *)original_01,
                                                 TierTestDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierTestDetailsPopup>_TierTestDetailsPopup_
                                                );
                            if (pOVar23 != (Object *)0x0) {
                              bVar28 = iRam_? != 0;
                              pOVar23[1].klass = pOVar27;
                              if (bVar28) {
                                uVar2 = (uint)((ulonglong)(pOVar23 + 1) >> 0xc);
                                puVar29 = (ulonglong *)
                                         ((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
                                do {
                                  uVar30 = *puVar29;
                                  LOCK();
                                  uVar31 = *puVar29;
                                  if (uVar30 == uVar31) {
                                    *puVar29 = uVar30 | 1L << (uVar2 & 0x3f);
                                  }
                                  UNLOCK();
                                } while (uVar30 != uVar31);
                              }
                              pGVar32 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_get_gameObject
                                                  ((Component *)this,(MethodInfo *)0x0);
                              pEVar33 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                                        FUN_?(
                                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                                  );
                              UnityEngine.UI.dll::UnityEngine::EventSystems::
                              ExecuteEvents+EventFunction`1[System::Object]::
                              ExecuteEvents_EventFunction_1_System_Object___ctor
                                        (pEVar33,pOVar23,
                                         MethodInfo__SpawnRoleMenu____c__DisplayClass58_0___ShowTestTier_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                                         ,(MethodInfo *)0x0);
                              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                                           field_0x1c == 0) {
                                FUN_?();
                              }
                              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                              ExecuteEvents_ExecuteHierarchy
                                        (pGVar32,(BaseEventData *)0x0,pEVar33,
                                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                                        );
                              pOVar27 = pOVar23[1].klass;
                              if (pOVar27 != (Object__Class *)0x0) {
                                bVar28 = cRam_? == '\0';
                                pIVar38 = (pOVar27->_0).byval_arg.data.array;
                                *(byte *)&(pOVar27->_0).this_arg.attrs = bVar5;
                                if (bVar28) {
                                  FUN_?(&TypeInfo__System__Number);
                                  LOCK();
                                  UNLOCK();
                                  FUN_?(&
                                                MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                                               );
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                                     ->klass->field_0x135 & 1) == 0) {
                                  FUN_?();
                                }
                                if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                                  FUN_?();
                                }
                                auStackY_38 = (undefined1  [8])0x0;
                                puStackY_30 = (undefined *)0x0;
                                pSVar37 = mscorlib.dll::System::Number::Number_FormatInt32
                                                    ((uint)bVar5,
                                                     (ReadOnlySpan_1_Char_ *)auStackY_38,
                                                     (IFormatProvider *)0x0,(MethodInfo *)0x0);
                                if (pIVar38 != (Il2CppArrayType *)0x0) {
                                  (**(code **)&pIVar38->etype[0x5e].attrs)
                                            (pIVar38,pSVar37,pIVar38->etype[0x5f].data.dummy);
                                  plVar39 = *(longlong **)&(pOVar27->_0).byval_arg.attrs;
                                  pSVar37 = mscorlib.dll::System::Int32::Int32_ToString
                                                      ((Int32 *)&stack0x00000008,(MethodInfo *)0x0);
                                  if (plVar39 != (longlong *)0x0) {
                                    UNRECOVERED_JUMPTABLE = *(code **)(*plVar39 + 0x5e8);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                    (*UNRECOVERED_JUMPTABLE)
                                              (plVar39,pSVar37,*(undefined8 *)(*plVar39 + 0x5f0),
                                               UNRECOVERED_JUMPTABLE);
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
              FUN_?();
              UNRECOVERED_JUMPTABLE = (code *)swi(3);
              (*UNRECOVERED_JUMPTABLE)();
              return;
            }
          }
        }
      }
    }
  }
  puStackY_30 = &UNK_?;
  FUN_?();
  UNRECOVERED_JUMPTABLE = (code *)swi(3);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* Void OnSpawnRoleSelected(Int32) */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_OnSpawnRoleSelected
               (SpawnRoleMenu *this,int32_t newSelectedSpawnRole,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).SelectionElementsList;
  if (pLVar1 == (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) goto code_?;
  uVar2 = (this->fields).selectedSpawnRole;
  if ((uint)(pLVar1->fields)._size <= uVar2) {
code_?:
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
              ((MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pDVar4 = (pLVar1->fields)._items;
  if (pDVar4 == (DefaultSpawnRoleSelectionElement__Array *)0x0) goto code_?;
  if ((uint)pDVar4->max_length <= uVar2) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pDVar5 = pDVar4->vector[(int)uVar2];
  if (pDVar5 != (DefaultSpawnRoleSelectionElement *)0x0) {
    (*(pDVar5->klass->vtable).OnUnSelected.methodPtr)
              (pDVar5,(pDVar5->klass->vtable).OnUnSelected.method);
    pLVar1 = (this->fields).SelectionElementsList;
    (this->fields).selectedSpawnRole = newSelectedSpawnRole;
    if (pLVar1 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
      if ((uint)(pLVar1->fields)._size <= (uint)newSelectedSpawnRole) goto code_?;
      pDVar4 = (pLVar1->fields)._items;
      if (pDVar4 == (DefaultSpawnRoleSelectionElement__Array *)0x0) goto code_?;
      if ((uint)pDVar4->max_length <= (uint)newSelectedSpawnRole) goto code_?;
      pDVar5 = pDVar4->vector[newSelectedSpawnRole];
      if (pDVar5 != (DefaultSpawnRoleSelectionElement *)0x0) {
        (*(pDVar5->klass->vtable).OnSelected.methodPtr)
                  (pDVar5,(pDVar5->klass->vtable).OnSelected.method);
        pcVar3 = pcRam_?;
        iVar6 = (this->fields).selectedSpawnRole;
        (this->fields).interpolateToPositionX =
             (this->fields).menuHalfWidth -
             ((float)(iVar6 + 1) * (this->fields).elementSpacing +
              (float)iVar6 * (this->fields).selectionElementWidth +
             (this->fields).selectionElementWidth * _UNK_?);
        pcVar7 = pcRam_?;
        if ((pcVar3 == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar7 = pcVar3,
           pcVar3 == (code *)0x0)) {
          uVar8 = func_?(&UNK_?);
          FUN_?(uVar8,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar7;
        fVar9 = (float)(*pcVar3)();
        pLVar1 = (this->fields).SelectionElementsList;
        pSVar10 = (this->fields).buttonController;
        (this->fields).interpolationStartTime = fVar9;
        (this->fields).shouldInterpolate = 1;
        if (pLVar1 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
          uVar2 = (this->fields).selectedSpawnRole;
          if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
          pDVar4 = (pLVar1->fields)._items;
          if (pDVar4 == (DefaultSpawnRoleSelectionElement__Array *)0x0) goto code_?;
          if ((uint)pDVar4->max_length <= uVar2) goto code_?;
          pDVar5 = pDVar4->vector[(int)uVar2];
          if ((pDVar5 == (DefaultSpawnRoleSelectionElement *)0x0) ||
             (bVar11 = (*(pDVar5->klass->vtable).get_Tier.methodPtr)
                                 (pDVar5,(pDVar5->klass->vtable).get_Tier.method),
             pSVar10 == (SpawnRoleSelectionButtonController *)0x0)) goto code_?;
          if (cRam_? == '\0') {
            FUN_?(&StringLiteral_Unlock_Tier_);
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral_Tier_);
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral__Locked);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          cVar12 = cRam_?;
          (pSVar10->fields).currentSpawnRoleGamePassTier = bVar11;
          if (cVar12 == '\0') {
            FUN_?(&TypeInfo__GamePassesManager);
            LOCK();
            UNLOCK();
            cVar12 = '\x01';
            cRam_? = '\x01';
          }
          if (TypeInfo__GamePassesManager->static_fields->playerPlanetData ==
              (PlayerPlanetData *)0x0) {
            return;
          }
          if (cVar12 == '\0') {
            FUN_?(&TypeInfo__GamePassesManager);
            LOCK();
            UNLOCK();
            cVar12 = '\x01';
            cRam_? = '\x01';
          }
          pPVar13 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
          if (pPVar13 != (PlayerPlanetData *)0x0) {
            bVar14 = (pPVar13->fields).gamePassTier;
            if (cVar12 == '\0') {
              FUN_?(&TypeInfo__GamePassesManager);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pPVar13 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
            if (pPVar13 != (PlayerPlanetData *)0x0) {
              bVar15 = (pPVar13->fields).previewGamePassTier;
              pGVar16 = (pSVar10->fields).FreeTryUI;
              if (pGVar16 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar16,bVar11 == bVar15 && bVar11 != 0,(MethodInfo *)0x0);
                if ((bVar14 < bVar11) && (bVar15 < bVar11)) {
                  pGVar16 = (pSVar10->fields).selectButton;
                  if (pGVar16 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar16,0,(MethodInfo *)0x0);
                    pGVar16 = (pSVar10->fields).buyTierButton;
                    if (bVar11 == (byte)(bVar14 + 1)) {
                      if (pGVar16 == (GameObject *)0x0) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar16,1,(MethodInfo *)0x0);
                      pGVar16 = (pSVar10->fields).lockedTierButton;
                      if (pGVar16 == (GameObject *)0x0) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar16,0,(MethodInfo *)0x0);
                      pTVar17 = (pSVar10->fields).buyTierButtonText;
                      aIStackX_10[0].m_value = (uint)bVar11;
                      pSVar18 = mscorlib.dll::System::Int32::Int32_ToString
                                          (aIStackX_10,(MethodInfo *)0x0);
                      pSVar18 = mscorlib.dll::System::String::String_Concat_4
                                          (StringLiteral_Unlock_Tier_,pSVar18,(MethodInfo *)0x0);
                    }
                    else {
                      if (pGVar16 == (GameObject *)0x0) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar16,0,(MethodInfo *)0x0);
                      pGVar16 = (pSVar10->fields).lockedTierButton;
                      if (pGVar16 == (GameObject *)0x0) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar16,1,(MethodInfo *)0x0);
                      pTVar17 = (pSVar10->fields).lockedTierButtonText;
                      aIStackX_10[0].m_value = (uint)bVar11;
                      pSVar18 = mscorlib.dll::System::Int32::Int32_ToString
                                          (aIStackX_10,(MethodInfo *)0x0);
                      pSVar18 = mscorlib.dll::System::String::String_Concat_5
                                          (StringLiteral_Tier_,pSVar18,StringLiteral__Locked,
                                           (MethodInfo *)0x0);
                    }
                    if (pTVar17 != (Text *)0x0) {
                      (*(pTVar17->klass->vtable).set_text.methodPtr)
                                (pTVar17,pSVar18,(pTVar17->klass->vtable).set_text.method);
                      return;
                    }
                  }
                }
                else {
                  pGVar16 = (pSVar10->fields).selectButton;
                  if (pGVar16 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar16,1,(MethodInfo *)0x0);
                    pGVar16 = (pSVar10->fields).buyTierButton;
                    if (pGVar16 != (GameObject *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar16,0,(MethodInfo *)0x0);
                      pGVar16 = (pSVar10->fields).lockedTierButton;
                      if (pGVar16 != (GameObject *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                  (pGVar16,0,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
code_?:
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OpenTierShopButtonPressed() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_OpenTierShopButtonPressed
               (SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    puStackY_30 = &UNK_?;
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 == (GameSessionData *)0x0) {
    puStackY_30 = &UNK_?;
    FUN_?();
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if ((pGVar1->fields).gameMode == 0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TierTestDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierTestDetailsPopup>_TierTestDetailsPopup_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__SpawnRoleMenu____c__DisplayClass58_0___ShowTestTier_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__SpawnRoleMenu____c__DisplayClass58_0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOVar2 = (Object *)FUN_?(TypeInfo__SpawnRoleMenu____c__DisplayClass58_0);
    pLVar3 = (this->fields).SelectionElementsList;
    if (pLVar3 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
      uVar4 = (this->fields).selectedSpawnRole;
      if ((uint)(pLVar3->fields)._size <= uVar4) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        UNRECOVERED_JUMPTABLE = (code *)swi(3);
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      pDVar5 = (pLVar3->fields)._items;
      if (pDVar5 != (DefaultSpawnRoleSelectionElement__Array *)0x0) {
        if ((uint)pDVar5->max_length <= uVar4) {
          FUN_?();
          UNRECOVERED_JUMPTABLE = (code *)swi(3);
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
        pDVar6 = pDVar5->vector[(int)uVar4];
        if (pDVar6 != (DefaultSpawnRoleSelectionElement *)0x0) {
          bVar7 = (*(pDVar6->klass->vtable).get_Tier.methodPtr)
                             (pDVar6,(pDVar6->klass->vtable).get_Tier.method);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__GamePassesManager);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pPVar8 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
          if (pPVar8 != (PlayerPlanetData *)0x0) {
            iVar9 = (pPVar8->fields).progressionGamePoints;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__GamePassesManager);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pPVar8 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
            if (pPVar8 != (PlayerPlanetData *)0x0) {
              pPVar10 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
              bVar11 = (pPVar8->fields).gamePassTier;
              if (pPVar10 != (PlayerTierStateCalculator *)0x0) {
                if ((pPVar10->fields).gamePointVelocityIsZero == 0) {
                  pDVar12 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::
                            PlayerTierStateCalculator::
                            PlayerTierStateCalculator_GetTierPricingStateBasedOnUserGamePointAmount
                                      (pPVar10,iVar9,(uint)bVar11,(MethodInfo *)0x0);
                }
                else {
                  pDVar12 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::
                            PlayerTierStateCalculator::
                            PlayerTierStateCalculator_GetTierPricingStateBasedOnUserTier
                                      (pPVar10,(uint)bVar11,(MethodInfo *)0x0);
                }
                if ((pDVar12 !=
                     (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                      *)0x0) &&
                   (pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              ByteEnum,System::Object]::
                              Dictionary_2_System_ByteEnum_System_Object__get_Item
                                        ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar12,
                                         (uint)bVar7,
                                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                        ), pOVar13 != (Object *)0x0)) {
                  original_00 = (this->fields).tierTestPopupPrefab;
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  pOVar14 = (Object__Class *)
                            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                      ((Object *)original_00,
                                       TierTestDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierTestDetailsPopup>_TierTestDetailsPopup_
                                      );
                  if (pOVar2 != (Object *)0x0) {
                    bVar15 = iRam_? != 0;
                    pOVar2[1].klass = pOVar14;
                    if (bVar15) {
                      uVar4 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
                      puVar16 = (ulonglong *)
                               ((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
                      do {
                        uVar17 = *puVar16;
                        LOCK();
                        uVar18 = *puVar16;
                        if (uVar17 == uVar18) {
                          *puVar16 = uVar17 | 1L << (uVar4 & 0x3f);
                        }
                        UNLOCK();
                      } while (uVar17 != uVar18);
                    }
                    pGVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                    pEVar20 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                              FUN_?(
                                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                           );
                    UnityEngine.UI.dll::UnityEngine::EventSystems::
                    ExecuteEvents+EventFunction`1[System::Object]::
                    ExecuteEvents_EventFunction_1_System_Object___ctor
                              (pEVar20,pOVar2,
                               MethodInfo__SpawnRoleMenu____c__DisplayClass58_0___ShowTestTier_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                               ,(MethodInfo *)0x0);
                    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c
                        == 0) {
                      FUN_?();
                    }
                    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_ExecuteHierarchy
                              (pGVar19,(BaseEventData *)0x0,pEVar20,
                               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                              );
                    pOVar14 = pOVar2[1].klass;
                    if (pOVar14 != (Object__Class *)0x0) {
                      bVar15 = cRam_? == '\0';
                      pIVar21 = (pOVar14->_0).byval_arg.data.array;
                      *(byte *)&(pOVar14->_0).this_arg.attrs = bVar7;
                      if (bVar15) {
                        FUN_?(&TypeInfo__System__Number);
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->
                           klass->field_0x135 & 1) == 0) {
                        FUN_?();
                      }
                      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      auStackY_38 = (undefined1  [8])0x0;
                      puStackY_30 = (undefined *)0x0;
                      pSVar22 = mscorlib.dll::System::Number::Number_FormatInt32
                                          ((uint)bVar7,(ReadOnlySpan_1_Char_ *)auStackY_38,
                                           (IFormatProvider *)0x0,(MethodInfo *)0x0);
                      if (pIVar21 != (Il2CppArrayType *)0x0) {
                        (**(code **)&pIVar21->etype[0x5e].attrs)
                                  (pIVar21,pSVar22,pIVar21->etype[0x5f].data.dummy);
                        plVar23 = *(longlong **)&(pOVar14->_0).byval_arg.attrs;
                        pSVar22 = mscorlib.dll::System::Int32::Int32_ToString
                                            ((Int32 *)&stack0x00000008,(MethodInfo *)0x0);
                        if (plVar23 != (longlong *)0x0) {
                          UNRECOVERED_JUMPTABLE = *(code **)(*plVar23 + 0x5e8);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          (*UNRECOVERED_JUMPTABLE)
                                    (plVar23,pSVar22,*(undefined8 *)(*plVar23 + 0x5f0),
                                     UNRECOVERED_JUMPTABLE);
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
    FUN_?();
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TierUnlockDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockDetailsPopup>_TierUnlockDetailsPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SpawnRoleMenu__OnPurchaseGamePassTier__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleMenu____c__DisplayClass56_0___ShowTierPurchase_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SpawnRoleMenu____c__DisplayClass56_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = (Object *)FUN_?(TypeInfo__SpawnRoleMenu____c__DisplayClass56_0);
  pLVar3 = (this->fields).SelectionElementsList;
  if (pLVar3 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
    uVar4 = (this->fields).selectedSpawnRole;
    if ((uint)(pLVar3->fields)._size <= uVar4) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    pDVar5 = (pLVar3->fields)._items;
    if (pDVar5 != (DefaultSpawnRoleSelectionElement__Array *)0x0) {
      if ((uint)pDVar5->max_length <= uVar4) {
        FUN_?();
        UNRECOVERED_JUMPTABLE = (code *)swi(3);
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      pDVar6 = pDVar5->vector[(int)uVar4];
      if (pDVar6 != (DefaultSpawnRoleSelectionElement *)0x0) {
        bVar7 = (*(pDVar6->klass->vtable).get_Tier.methodPtr)
                           (pDVar6,(pDVar6->klass->vtable).get_Tier.method);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__GamePassesManager);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pPVar8 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
        if (pPVar8 != (PlayerPlanetData *)0x0) {
          iVar9 = (pPVar8->fields).progressionGamePoints;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__GamePassesManager);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pPVar8 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
          if (pPVar8 != (PlayerPlanetData *)0x0) {
            pPVar10 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
            bVar11 = (pPVar8->fields).gamePassTier;
            if (pPVar10 != (PlayerTierStateCalculator *)0x0) {
              if ((pPVar10->fields).gamePointVelocityIsZero == 0) {
                pDVar12 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::
                          PlayerTierStateCalculator::
                          PlayerTierStateCalculator_GetTierPricingStateBasedOnUserGamePointAmount
                                    (pPVar10,iVar9,(uint)bVar11,(MethodInfo *)0x0);
              }
              else {
                pDVar12 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::
                          PlayerTierStateCalculator::
                          PlayerTierStateCalculator_GetTierPricingStateBasedOnUserTier
                                    (pPVar10,(uint)bVar11,(MethodInfo *)0x0);
              }
              if ((pDVar12 !=
                   (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                    *)0x0) &&
                 (pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            ByteEnum,System::Object]::
                            Dictionary_2_System_ByteEnum_System_Object__get_Item
                                      ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar12,
                                       (uint)bVar7,
                                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                      ), pOVar13 != (Object *)0x0)) {
                iVar9 = *(int32_t *)&pOVar13[1].monitor;
                original = (this->fields).tierUnlockPopupPrefab;
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                pOVar14 = (Object__Class *)
                          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                    ((Object *)original,
                                     TierUnlockDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockDetailsPopup>_TierUnlockDetailsPopup_
                                    );
                if (pOVar2 != (Object *)0x0) {
                  bVar15 = iRam_? != 0;
                  pOVar2[1].klass = pOVar14;
                  if (bVar15) {
                    uVar4 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
                    puVar16 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
                    do {
                      uVar17 = *puVar16;
                      LOCK();
                      uVar18 = *puVar16;
                      if (uVar17 == uVar18) {
                        *puVar16 = uVar17 | 1L << (uVar4 & 0x3f);
                      }
                      UNLOCK();
                    } while (uVar17 != uVar18);
                  }
                  pGVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                  pEVar20 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                            FUN_?(
                                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                         );
                  UnityEngine.UI.dll::UnityEngine::EventSystems::
                  ExecuteEvents+EventFunction`1[System::Object]::
                  ExecuteEvents_EventFunction_1_System_Object___ctor
                            (pEVar20,pOVar2,
                             MethodInfo__SpawnRoleMenu____c__DisplayClass56_0___ShowTierPurchase_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                             ,(MethodInfo *)0x0);
                  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c
                      == 0) {
                    FUN_?();
                  }
                  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                  ExecuteEvents_ExecuteHierarchy
                            (pGVar19,(BaseEventData *)0x0,pEVar20,
                             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                            );
                  pOVar14 = pOVar2[1].klass;
                  this_00 = (NavMesh_OnNavMeshPreUpdate *)
                            FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
                  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                  NavMesh_OnNavMeshPreUpdate__ctor
                            (this_00,(Object *)this,
                             MethodInfo__SpawnRoleMenu__OnPurchaseGamePassTier__,(MethodInfo *)0x0);
                  if (pOVar14 != (Object__Class *)0x0) {
                    TierUnlockDetailsPopup::TierUnlockDetailsPopup_Initialize
                              ((TierUnlockDetailsPopup *)pOVar14,(uint)bVar7,iVar9,
                               (UnityAction *)this_00,(MethodInfo *)0x0);
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
  FUN_?();
  UNRECOVERED_JUMPTABLE = (code *)swi(3);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* Void PrepareForSpawnRoleActivating() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_PrepareForSpawnRoleActivating
               (SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FirstTimePressPlayController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__FirstTimePressPlayController->static_fields->haveBeenPressed == 0) {
    FirstTimePressPlayController::FirstTimePressPlayController_OnFirstTimePlayIsPressed
              ((MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ILockCursorManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0) {
    return;
  }
  pMVar1 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
  if ((pMVar1 == (MVGameControllerDesktop *)0x0) ||
     (pIVar2 = (pMVar1->fields).lockCursorManager, pIVar2 == (ILockCursorManager *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar4 = (Il2CppRuntimeInterfaceOffsetPair *)0x1;
  uVar5 = 0;
  pIVar6 = pIVar2->klass;
  uVar7._0_1_ = (pIVar6->_1).rank;
  uVar7._1_1_ = (pIVar6->_1).minimumAlignment;
  if (uVar7 != 0) {
    pIVar4 = pIVar6->interfaceOffsets;
    do {
      if (pIVar4[uVar5].interfaceType == (Il2CppClass *)TypeInfo__ILockCursorManager) {
        pVVar8 = &(pIVar6->vtable).get_CursorLock + (pIVar4[uVar5].offset + 2);
        goto code_?;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar7);
  }
  pVVar8 = (VirtualInvokeData *)FUN_?(pIVar2,TypeInfo__ILockCursorManager,2,pIVar4);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar8->methodPtr)(pIVar2,1,pVVar8->method,pVVar8->methodPtr);
  return;
}


/* Void RecalculateInterpolation(Int32) */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_RecalculateInterpolation
               (SpawnRoleMenu *this,int32_t index,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  (this->fields).interpolateToPositionX =
       (this->fields).menuHalfWidth -
       ((float)(index + 1) * (this->fields).elementSpacing +
        (float)index * (this->fields).selectionElementWidth +
       (this->fields).selectionElementWidth * _UNK_?);
  pcVar2 = pcRam_?;
  if ((pcVar1 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar2 = pcVar1, pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcVar1)();
  (this->fields).interpolationStartTime = fVar4;
  (this->fields).shouldInterpolate = 1;
  return;
}


/* Void ShowElements(Int32) */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_ShowElements
               (SpawnRoleMenu *this,int32_t startElementIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).currentSelectionStartIndex = startElementIndex;
  iVar1 = startElementIndex;
  if (startElementIndex < (this->fields).maxSelectionElementsOnScreen + startElementIndex) {
    do {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Count__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (-1 < iVar1) {
        pLVar2 = (this->fields).SelectionElementsList;
        if (pLVar2 == (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
code_?:
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (iVar1 < (pLVar2->fields)._size) {
          this_00 = (DefaultSpawnRoleSelectionElement *)FUN_?(pLVar2);
          if (this_00 == (DefaultSpawnRoleSelectionElement *)0x0) goto code_?;
          DefaultSpawnRoleSelectionElement::DefaultSpawnRoleSelectionElement_Activate
                    (this_00,(MethodInfo *)0x0);
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (this->fields).maxSelectionElementsOnScreen + startElementIndex);
  }
  return;
}


/* Void ShowLockedTierPurchase() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_ShowLockedTierPurchase
               (SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TierLockedDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierLockedDetailsPopup>_TierLockedDetailsPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SpawnRoleMenu__OnPurchaseGamePassTier__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleMenu____c__DisplayClass57_0___ShowLockedTierPurchase_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SpawnRoleMenu____c__DisplayClass57_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__SpawnRoleMenu____c__DisplayClass57_0);
  pLVar1 = (this->fields).SelectionElementsList;
  if (pLVar1 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
    uVar2 = (this->fields).selectedSpawnRole;
    if ((uint)(pLVar1->fields)._size <= uVar2) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pDVar4 = (pLVar1->fields)._items;
    if (pDVar4 != (DefaultSpawnRoleSelectionElement__Array *)0x0) {
      if ((uint)pDVar4->max_length <= uVar2) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pDVar5 = pDVar4->vector[(int)uVar2];
      if (pDVar5 != (DefaultSpawnRoleSelectionElement *)0x0) {
        bVar6 = (*(pDVar5->klass->vtable).get_Tier.methodPtr)
                          (pDVar5,(pDVar5->klass->vtable).get_Tier.method);
        original = (this->fields).tierLockedPopupPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pOVar7 = (Object__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)original,
                             TierLockedDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierLockedDetailsPopup>_TierLockedDetailsPopup_
                            );
        if (object != (Object *)0x0) {
          bVar8 = iRam_? != 0;
          object[1].klass = pOVar7;
          if (bVar8) {
            uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
            lVar9 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
            do {
              uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
              puVar11 = (ulonglong *)(lVar9 + 0xADDR);
              LOCK();
              bVar8 = uVar10 == *puVar11;
              if (bVar8) {
                *puVar11 = uVar10 | 1L << (uVar2 & 0x3f);
              }
              UNLOCK();
            } while (!bVar8);
          }
          root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
          this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    (this_00,object,
                     MethodInfo__SpawnRoleMenu____c__DisplayClass57_0___ShowLockedTierPurchase_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (root,(BaseEventData *)0x0,this_00,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          pOVar7 = object[1].klass;
          this_01 = (NavMesh_OnNavMeshPreUpdate *)
                    FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (this_01,(Object *)this,MethodInfo__SpawnRoleMenu__OnPurchaseGamePassTier__,
                     (MethodInfo *)0x0);
          if (pOVar7 != (Object__Class *)0x0) {
            bVar8 = iRam_? != 0;
            *(byte *)&(pOVar7->_0).generic_class = bVar6;
            (pOVar7->_0).typeMetadataHandle = (Il2CppMetadataTypeHandle)this_01;
            if (bVar8) {
              uVar2 = (uint)((ulonglong)&(pOVar7->_0).typeMetadataHandle >> 0xc);
              lVar9 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
              do {
                uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
                puVar11 = (ulonglong *)(lVar9 + 0xADDR);
                LOCK();
                bVar8 = uVar10 == *puVar11;
                if (bVar8) {
                  *puVar11 = uVar10 | 1L << (uVar2 & 0x3f);
                }
                UNLOCK();
              } while (!bVar8);
            }
            pTVar12 = (Text *)(pOVar7->_0).byval_arg.data.array;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__System__Number);
              LOCK();
              UNLOCK();
              FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
                 field_0x135 & 1) == 0) {
              FUN_?();
            }
            if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
              FUN_?();
            }
            aRStack_13[0]._pointer._value = (void *)0x0;
            aRStack_13[0]._length = 0;
            aRStack_13[0]._12_4_ = 0;
            pSVar14 = mscorlib.dll::System::Number::Number_FormatInt32
                                ((uint)bVar6,aRStack_13,(IFormatProvider *)0x0,(MethodInfo *)0x0);
            if (pTVar12 != (Text *)0x0) {
              (*(pTVar12->klass->vtable).set_text.methodPtr)
                        (pTVar12,pSVar14,(pTVar12->klass->vtable).set_text.method);
              TierLockedDetailsPopup::TierLockedDetailsPopup_UpdateLockedText
                        ((TierLockedDetailsPopup *)pOVar7,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__GamePassesManager);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0
                 ) {
                TierLockedDetailsPopup::TierLockedDetailsPopup_UpdateTierProgressBar
                          ((TierLockedDetailsPopup *)pOVar7,(MethodInfo *)0x0);
              }
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ShowTestTier() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_ShowTestTier
               (SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TierTestDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierTestDetailsPopup>_TierTestDetailsPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleMenu____c__DisplayClass58_0___ShowTestTier_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SpawnRoleMenu____c__DisplayClass58_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__SpawnRoleMenu____c__DisplayClass58_0);
  pLVar1 = (this->fields).SelectionElementsList;
  if (pLVar1 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
    uVar2 = (this->fields).selectedSpawnRole;
    if ((uint)(pLVar1->fields)._size <= uVar2) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    pDVar3 = (pLVar1->fields)._items;
    if (pDVar3 != (DefaultSpawnRoleSelectionElement__Array *)0x0) {
      if ((uint)pDVar3->max_length <= uVar2) {
        FUN_?();
        UNRECOVERED_JUMPTABLE = (code *)swi(3);
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      pDVar4 = pDVar3->vector[(int)uVar2];
      if (pDVar4 != (DefaultSpawnRoleSelectionElement *)0x0) {
        bVar5 = (*(pDVar4->klass->vtable).get_Tier.methodPtr)
                           (pDVar4,(pDVar4->klass->vtable).get_Tier.method);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__GamePassesManager);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pPVar6 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
        if (pPVar6 != (PlayerPlanetData *)0x0) {
          iVar7 = (pPVar6->fields).progressionGamePoints;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__GamePassesManager);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pPVar6 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
          if (pPVar6 != (PlayerPlanetData *)0x0) {
            this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
            bVar8 = (pPVar6->fields).gamePassTier;
            if (this_00 != (PlayerTierStateCalculator *)0x0) {
              if ((this_00->fields).gamePointVelocityIsZero == 0) {
                this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::
                          PlayerTierStateCalculator::
                          PlayerTierStateCalculator_GetTierPricingStateBasedOnUserGamePointAmount
                                    (this_00,iVar7,(uint)bVar8,(MethodInfo *)0x0);
              }
              else {
                this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::
                          PlayerTierStateCalculator::
                          PlayerTierStateCalculator_GetTierPricingStateBasedOnUserTier
                                    (this_00,(uint)bVar8,(MethodInfo *)0x0);
              }
              if ((this_01 !=
                   (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                    *)0x0) &&
                 (pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            ByteEnum,System::Object]::
                            Dictionary_2_System_ByteEnum_System_Object__get_Item
                                      ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,
                                       (uint)bVar5,
                                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                      ), pOVar9 != (Object *)0x0)) {
                iVar7 = *(int32_t *)&pOVar9[1].monitor;
                original = (this->fields).tierTestPopupPrefab;
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                pOVar10 = (Object__Class *)
                          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                    ((Object *)original,
                                     TierTestDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierTestDetailsPopup>_TierTestDetailsPopup_
                                    );
                if (object != (Object *)0x0) {
                  bVar11 = iRam_? != 0;
                  object[1].klass = pOVar10;
                  if (bVar11) {
                    uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
                    puVar12 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
                    do {
                      uVar13 = *puVar12;
                      LOCK();
                      uVar14 = *puVar12;
                      if (uVar13 == uVar14) {
                        *puVar12 = uVar13 | 1L << (uVar2 & 0x3f);
                      }
                      UNLOCK();
                    } while (uVar13 != uVar14);
                  }
                  root = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                  this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                            FUN_?(
                                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                         );
                  UnityEngine.UI.dll::UnityEngine::EventSystems::
                  ExecuteEvents+EventFunction`1[System::Object]::
                  ExecuteEvents_EventFunction_1_System_Object___ctor
                            (this_02,object,
                             MethodInfo__SpawnRoleMenu____c__DisplayClass58_0___ShowTestTier_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                             ,(MethodInfo *)0x0);
                  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c
                      == 0) {
                    FUN_?();
                  }
                  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                  ExecuteEvents_ExecuteHierarchy
                            (root,(BaseEventData *)0x0,this_02,
                             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                            );
                  pOVar10 = object[1].klass;
                  if (pOVar10 != (Object__Class *)0x0) {
                    bVar11 = cRam_? == '\0';
                    pIVar15 = (pOVar10->_0).byval_arg.data.array;
                    *(byte *)&(pOVar10->_0).this_arg.attrs = bVar5;
                    aIStackX_8[0].m_value = iVar7;
                    if (bVar11) {
                      FUN_?(&TypeInfo__System__Number);
                      LOCK();
                      UNLOCK();
                      FUN_?(&
                                    MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->
                         klass->field_0x135 & 1) == 0) {
                      FUN_?();
                    }
                    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    aRStack_16[0]._pointer._value = (void *)0x0;
                    aRStack_16[0]._length = 0;
                    aRStack_16[0]._12_4_ = 0;
                    pSVar17 = mscorlib.dll::System::Number::Number_FormatInt32
                                        ((uint)bVar5,aRStack_16,(IFormatProvider *)0x0,
                                         (MethodInfo *)0x0);
                    if (pIVar15 != (Il2CppArrayType *)0x0) {
                      (**(code **)&pIVar15->etype[0x5e].attrs)
                                (pIVar15,pSVar17,pIVar15->etype[0x5f].data.dummy);
                      plVar18 = *(longlong **)&(pOVar10->_0).byval_arg.attrs;
                      pSVar17 = mscorlib.dll::System::Int32::Int32_ToString
                                          (aIStackX_8,(MethodInfo *)0x0);
                      if (plVar18 != (longlong *)0x0) {
                        UNRECOVERED_JUMPTABLE = *(code **)(*plVar18 + 0x5e8);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        (*UNRECOVERED_JUMPTABLE)
                                  (plVar18,pSVar17,*(undefined8 *)(*plVar18 + 0x5f0),
                                   UNRECOVERED_JUMPTABLE);
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
  FUN_?();
  UNRECOVERED_JUMPTABLE = (code *)swi(3);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* Void ShowTierPurchase() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_ShowTierPurchase
               (SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TierUnlockDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockDetailsPopup>_TierUnlockDetailsPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SpawnRoleMenu__OnPurchaseGamePassTier__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleMenu____c__DisplayClass56_0___ShowTierPurchase_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SpawnRoleMenu____c__DisplayClass56_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__SpawnRoleMenu____c__DisplayClass56_0);
  pLVar1 = (this->fields).SelectionElementsList;
  if (pLVar1 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
    uVar2 = (this->fields).selectedSpawnRole;
    if ((uint)(pLVar1->fields)._size <= uVar2) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pDVar4 = (pLVar1->fields)._items;
    if (pDVar4 != (DefaultSpawnRoleSelectionElement__Array *)0x0) {
      if ((uint)pDVar4->max_length <= uVar2) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pDVar5 = pDVar4->vector[(int)uVar2];
      if (pDVar5 != (DefaultSpawnRoleSelectionElement *)0x0) {
        bVar6 = (*(pDVar5->klass->vtable).get_Tier.methodPtr)
                           (pDVar5,(pDVar5->klass->vtable).get_Tier.method);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__GamePassesManager);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pPVar7 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
        if (pPVar7 != (PlayerPlanetData *)0x0) {
          iVar8 = (pPVar7->fields).progressionGamePoints;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__GamePassesManager);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pPVar7 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
          if (pPVar7 != (PlayerPlanetData *)0x0) {
            this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
            bVar9 = (pPVar7->fields).gamePassTier;
            if (this_00 != (PlayerTierStateCalculator *)0x0) {
              if ((this_00->fields).gamePointVelocityIsZero == 0) {
                this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::
                          PlayerTierStateCalculator::
                          PlayerTierStateCalculator_GetTierPricingStateBasedOnUserGamePointAmount
                                    (this_00,iVar8,(uint)bVar9,(MethodInfo *)0x0);
              }
              else {
                this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::
                          PlayerTierStateCalculator::
                          PlayerTierStateCalculator_GetTierPricingStateBasedOnUserTier
                                    (this_00,(uint)bVar9,(MethodInfo *)0x0);
              }
              if ((this_01 !=
                   (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                    *)0x0) &&
                 (pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            ByteEnum,System::Object]::
                            Dictionary_2_System_ByteEnum_System_Object__get_Item
                                      ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,
                                       (uint)bVar6,
                                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                      ), pOVar10 != (Object *)0x0)) {
                iVar8 = *(int32_t *)&pOVar10[1].monitor;
                original = (this->fields).tierUnlockPopupPrefab;
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                pOVar11 = (Object__Class *)
                          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                    ((Object *)original,
                                     TierUnlockDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockDetailsPopup>_TierUnlockDetailsPopup_
                                    );
                if (object != (Object *)0x0) {
                  bVar12 = iRam_? != 0;
                  object[1].klass = pOVar11;
                  if (bVar12) {
                    uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
                    puVar13 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
                    do {
                      uVar14 = *puVar13;
                      LOCK();
                      uVar15 = *puVar13;
                      if (uVar14 == uVar15) {
                        *puVar13 = uVar14 | 1L << (uVar2 & 0x3f);
                      }
                      UNLOCK();
                    } while (uVar14 != uVar15);
                  }
                  root = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                  this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                            FUN_?(
                                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                         );
                  UnityEngine.UI.dll::UnityEngine::EventSystems::
                  ExecuteEvents+EventFunction`1[System::Object]::
                  ExecuteEvents_EventFunction_1_System_Object___ctor
                            (this_02,object,
                             MethodInfo__SpawnRoleMenu____c__DisplayClass56_0___ShowTierPurchase_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                             ,(MethodInfo *)0x0);
                  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c
                      == 0) {
                    FUN_?();
                  }
                  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                  ExecuteEvents_ExecuteHierarchy
                            (root,(BaseEventData *)0x0,this_02,
                             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                            );
                  pOVar11 = object[1].klass;
                  this_03 = (NavMesh_OnNavMeshPreUpdate *)
                            FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
                  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                  NavMesh_OnNavMeshPreUpdate__ctor
                            (this_03,(Object *)this,
                             MethodInfo__SpawnRoleMenu__OnPurchaseGamePassTier__,(MethodInfo *)0x0);
                  if (pOVar11 != (Object__Class *)0x0) {
                    TierUnlockDetailsPopup::TierUnlockDetailsPopup_Initialize
                              ((TierUnlockDetailsPopup *)pOVar11,(uint)bVar6,iVar8,
                               (UnityAction *)this_03,(MethodInfo *)0x0);
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
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_Start(SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 == (MainCameraManager *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  value = (this->fields)._.cameraMaskMode;
  player = (MVPlayer *)(ulonglong)value;
  method_00 = (MethodInfo *)0x0;
  MainCameraManager::MainCameraManager_set_CamMaskMode(this_00,value,(MethodInfo *)0x0);
  if ((this->fields)._.haveSetSelectedTeam == 0) {
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
    if (extraout_RAX == 0) goto code_?;
    (this->fields)._.selectedTeam = *(int32_t *)(extraout_RAX + 0x84);
  }
  LobbyFlowMenu::LobbyFlowMenu_UpdateAvailableMenues((LobbyFlowMenu *)this,(MethodInfo *)0x0);
  pAVar2 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
  this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_01,(Object *)this,MethodInfo__SpawnRoleMenu__OnPlayerPlanetDataUpdated__,
             (MethodInfo *)0x0);
  pAVar2 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar2,(Delegate *)this_01,(MethodInfo *)0x0);
  if (pAVar2 == (Action *)0x0) {
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
  }
  else {
    pAVar3 = (Action *)0x0;
    if (pAVar2->klass == TypeInfo__System__Action) {
      pAVar3 = pAVar2;
    }
    if (pAVar3 == (Action *)0x0) {
      FUN_?(pAVar2,TypeInfo__System__Action);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar3;
    pAVar3 = (Action *)0x0;
    if (pAVar2->klass == TypeInfo__System__Action) {
      pAVar3 = pAVar2;
    }
    if (pAVar3 == (Action *)0x0) {
      FUN_?(pAVar2,TypeInfo__System__Action);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated
                  >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  return;
}


/* Void StartPlaying() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_StartPlaying
               (SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FirstTimePressPlayController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__FirstTimePressPlayController->static_fields->haveBeenPressed == 0) {
    FirstTimePressPlayController::FirstTimePressPlayController_OnFirstTimePlayIsPressed
              ((MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__ILockCursorManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
      pMVar1 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
      if ((pMVar1 == (MVGameControllerDesktop *)0x0) ||
         (pIVar2 = (pMVar1->fields).lockCursorManager, pIVar2 == (ILockCursorManager *)0x0))
      goto code_?;
      FUN_?(1,TypeInfo__ILockCursorManager,pIVar2,1);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar3 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar3 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar3->fields).gameMode == 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar3 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar3 == (GameSessionData *)0x0) goto code_?;
      if ((pGVar3->fields).gameMode != 0) {
        return;
      }
      lVar4 = FUN_?();
      if (lVar4 == 0) goto code_?;
      cVar5 = FUN_?(1,TypeInfo__IEditModeUI,lVar4);
      if (cVar5 == '\0') {
        return;
      }
    }
    pGVar6 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if ((pGVar6 != (GameEventManager *)0x0) &&
       (pGVar7 = (pGVar6->fields).AvatarCommandsPlayMode,
       pGVar7 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
      if ((pGVar7->fields).OnSetToSpawnPoint == (Action *)0x0) {
        return;
      }
      pAVar8 = (pGVar7->fields).OnSetToSpawnPoint;
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pAVar8->fields)._._.invoke_impl)
                ((pAVar8->fields)._._.method_code,(pAVar8->fields)._._.method);
      return;
    }
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pIVar9 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
    if (pIVar9 != (IPlayModeUI *)0x0) {
      FUN_?(8,TypeInfo__IPlayModeUI,pIVar9,0);
      pSVar10 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                          ((MethodInfo *)0x0);
      if ((pSVar10 != (SpawnRoleDataMediator *)0x0) &&
         (pSVar11 = (pSVar10->fields).SpawnRoleModeTypeWrapper,
         pSVar11 != (SpawnRoleModeTypeWrapper *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pSVar12 = (pSVar11->fields).spawnRoleType;
        if ((pSVar12 != (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) &&
           (pSVar13 = (pSVar12->fields).subscribableVariable,
           pSVar13 != (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0)) {
          if (((pSVar13->fields)._.value & 4) == 0) {
            return;
          }
          pGVar6 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                              ((MethodInfo *)0x0);
          if ((pGVar6 == (GameEventManager *)0x0) ||
             (pGVar7 = (pGVar6->fields).AvatarCommandsPlayMode,
             pGVar7 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0))
          goto code_?;
          if ((pGVar7->fields).OnEnterPlaymode == (Action *)0x0) {
            return;
          }
          pAVar8 = (pGVar7->fields).OnEnterPlaymode;
          goto code_?;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_Update
               (SpawnRoleMenu *this,MethodInfo *method)

{
  if ((this->fields).shouldInterpolate != 0) {
    pRVar1 = (this->fields).elementContainer;
    if (pRVar1 == (RectTransform *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar3 = (pRVar1->fields)._._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar1,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar3);
    fVar5 = (this->fields).interpolateToPositionX;
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    fVar6 = (float)(*pcRam_?)();
    fVar6 = fVar6 - (this->fields).interpolationStartTime;
    if (fVar6 < 0.0) {
      fVar6 = 0.0;
    }
    else if (_UNK_? < fVar6) {
      fVar6 = _UNK_?;
    }
    pRVar1 = (this->fields).elementContainer;
    uStack_7 = (ulonglong)(uint)((fVar5 - 0.0) * fVar6 + 0.0);
    if (pRVar1 == (RectTransform *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uStack_8 = uStack_7;
    uStack_9 = 0;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar3 = (pRVar1->fields)._._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar1,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar3,&uStack_8);
  }
  return;
}


/* Void UpdateShownElements() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu_UpdateShownElements
               (SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).scrollbar;
  if (pSVar1 != (Scrollbar *)0x0) {
    fVar2 = (pSVar1->fields).m_Value;
    if (1 < (pSVar1->fields).m_NumberOfSteps) {
      fVar2 = (float)FUN_?((float)((pSVar1->fields).m_NumberOfSteps + -1) * fVar2);
      fVar2 = fVar2 / (float)((pSVar1->fields).m_NumberOfSteps + -1);
    }
    pLVar3 = (this->fields).SelectionElementsList;
    if (pLVar3 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
      iVar4 = FUN_?((float)(pLVar3->fields)._size * fVar2);
      iVar4 = FUN_?((float)iVar4 -
                            (float)(this->fields).maxSelectionElementsOnScreen * _UNK_?);
      pLVar3 = (this->fields).SelectionElementsList;
      if (pLVar3 != (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
        SpawnRoleMenu_HideElements
                  (this,(this->fields).currentSelectionStartIndex,(pLVar3->fields)._size,iVar4,
                   (MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Item_int_
                        ,iVar4,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        (this->fields).currentSelectionStartIndex = iVar4;
        iVar5 = iVar4;
        if (iVar4 < (this->fields).maxSelectionElementsOnScreen + iVar4) {
          do {
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__get_Count__
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (-1 < iVar5) {
              pLVar3 = (this->fields).SelectionElementsList;
              if (pLVar3 == (List_1_DefaultSpawnRoleSelectionElement_ *)0x0) {
code_?:
                FUN_?();
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if (iVar5 < (pLVar3->fields)._size) {
                this_00 = (DefaultSpawnRoleSelectionElement *)FUN_?(pLVar3);
                if (this_00 == (DefaultSpawnRoleSelectionElement *)0x0) goto code_?;
                DefaultSpawnRoleSelectionElement::DefaultSpawnRoleSelectionElement_Activate
                          (this_00,(MethodInfo *)0x0);
              }
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < (this->fields).maxSelectionElementsOnScreen + iVar4);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* SpawnRoleMenu() */

void Assembly-CSharp.dll::SpawnRoleMenu::SpawnRoleMenu__ctor(SpawnRoleMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).maxSelectionElementsOnScreen = 10;
  this_00 = (List_1_DefaultSpawnRoleSelectionElement_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>
                         );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<DefaultSpawnRoleSelectionElement>__List__
            );
  bVar1 = iRam_? != 0;
  (this->fields).SelectionElementsList = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).SelectionElementsList >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__List__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._.cameraMaskMode = 2;
  this_01 = (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>
                         );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__List__
            );
  bVar1 = iRam_? != 0;
  (this->fields)._.menuOrder = this_01;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.menuOrder >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

