
/* Void Awake() */

void Assembly-CSharp.dll::JoystickControllerStack::JoystickControllerStack_Awake
               (JoystickControllerStack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 == (MVGameControllerBase *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = iRam_? != 0;
  (pMVar1->fields).joystickControllerStack = this;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(pMVar1->fields).joystickControllerStack >> 0xc);
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Pushing_unknown_joystick);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  original = (this->fields).avatar;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<InGameControls>__Add_InGameControls_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<InGameControls>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<InGameControls>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  InGameControls_MethodInfo__UnityEngine__Object__Instantiate<InGameControls>_InGameControls_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Controls_prefab_not_set_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (original == (InGameControls *)0x0) {
code_?:
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_Controls_prefab_not_set_,(MethodInfo *)0x0);
    original = (this->fields).avatar;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((original->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_00 = (Component *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       InGameControls_MethodInfo__UnityEngine__Object__Instantiate<InGameControls>_InGameControls_
                      );
  pLVar8 = (this->fields).controls;
  if (pLVar8 == (List_1_InGameControls_ *)0x0) goto code_?;
  if ((pLVar8->fields)._size != 0) {
    iVar9 = (pLVar8->fields)._size;
    if ((uint)(pLVar8->fields)._size <= iVar9 - 1U) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pIVar10 = (pLVar8->fields)._items;
    if (pIVar10 == (InGameControls__Array *)0x0) goto code_?;
    if ((uint)pIVar10->max_length <= iVar9 - 1U) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((pIVar10->vector[(longlong)iVar9 + -1] == (InGameControls *)0x0) ||
       (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pIVar10->vector[(longlong)iVar9 + -1],(MethodInfo *)0x0),
       pGVar11 == (GameObject *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar11,0,(MethodInfo *)0x0);
  }
  if ((this_00 != (Component *)0x0) &&
     (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          (this_00,(MethodInfo *)0x0), pGVar11 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar11,1,(MethodInfo *)0x0);
    pMVar12 = MethodInfo__System__Collections__Generic__List<InGameControls>__Add_InGameControls_;
    pLVar8 = (this->fields).controls;
    if (pLVar8 != (List_1_InGameControls_ *)0x0) {
      piVar13 = &(pLVar8->fields)._version;
      *piVar13 = *piVar13 + 1;
      pIVar10 = (pLVar8->fields)._items;
      if (pIVar10 != (InGameControls__Array *)0x0) {
        uVar4 = (pLVar8->fields)._size;
        if (uVar4 < (uint)pIVar10->max_length) {
          (pLVar8->fields)._size = uVar4 + 1;
          FUN_?(pIVar10,(longlong)(int)uVar4,this_00);
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__AddWithResize
                    ((List_1_System_Object_ *)pLVar8,(Object *)this_00,
                     pMVar12->klass->rgctx_data[0xe].method);
        }
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        (this_00,(MethodInfo *)0x0);
        pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
        if (obj != (Transform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                          ,pTVar14,0,0,unaff_RDI);
            LOCK();
            UNLOCK();
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (obj == (Transform *)0x0) {
            FUN_?();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pvVar15 = (obj->fields)._._.m_CachedPtr;
          if (pvVar15 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((
              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?();
          }
          if (pTVar14 == (Transform *)0x0) {
            pvVar16 = (void *)0x0;
          }
          else {
            pvVar16 = (pTVar14->fields)._._.m_CachedPtr;
          }
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar17 = func_?(&UNK_?);
            FUN_?(uVar17,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pvVar15,pvVar16,0);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void CreateJoystickFromPrefab(InGameControls) */

void Assembly-CSharp.dll::JoystickControllerStack::JoystickControllerStack_CreateJoystickFromPrefab
               (JoystickControllerStack *this,InGameControls *prefab,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<InGameControls>__Add_InGameControls_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<InGameControls>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<InGameControls>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  InGameControls_MethodInfo__UnityEngine__Object__Instantiate<InGameControls>_InGameControls_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Controls_prefab_not_set_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (prefab == (InGameControls *)0x0) {
code_?:
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_Controls_prefab_not_set_,(MethodInfo *)0x0);
    prefab = (this->fields).avatar;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((prefab->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_00 = (Component *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)prefab,
                       InGameControls_MethodInfo__UnityEngine__Object__Instantiate<InGameControls>_InGameControls_
                      );
  pLVar1 = (this->fields).controls;
  if (pLVar1 == (List_1_InGameControls_ *)0x0) goto code_?;
  if ((pLVar1->fields)._size != 0) {
    iVar2 = (pLVar1->fields)._size;
    if ((uint)(pLVar1->fields)._size <= iVar2 - 1U) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar4 = (pLVar1->fields)._items;
    if (pIVar4 == (InGameControls__Array *)0x0) goto code_?;
    if ((uint)pIVar4->max_length <= iVar2 - 1U) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((pIVar4->vector[(longlong)iVar2 + -1] == (InGameControls *)0x0) ||
       (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pIVar4->vector[(longlong)iVar2 + -1],(MethodInfo *)0x0),
       pGVar5 == (GameObject *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar5,0,(MethodInfo *)0x0);
  }
  if ((this_00 != (Component *)0x0) &&
     (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         (this_00,(MethodInfo *)0x0), pGVar5 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar5,1,(MethodInfo *)0x0);
    pMVar6 = MethodInfo__System__Collections__Generic__List<InGameControls>__Add_InGameControls_;
    pLVar1 = (this->fields).controls;
    if (pLVar1 != (List_1_InGameControls_ *)0x0) {
      piVar7 = &(pLVar1->fields)._version;
      *piVar7 = *piVar7 + 1;
      pIVar4 = (pLVar1->fields)._items;
      if (pIVar4 != (InGameControls__Array *)0x0) {
        uVar8 = (pLVar1->fields)._size;
        if (uVar8 < (uint)pIVar4->max_length) {
          (pLVar1->fields)._size = uVar8 + 1;
          FUN_?(pIVar4,(longlong)(int)uVar8,this_00);
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__AddWithResize
                    ((List_1_System_Object_ *)pLVar1,(Object *)this_00,
                     pMVar6->klass->rgctx_data[0xe].method);
        }
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        (this_00,(MethodInfo *)0x0);
        pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if (obj != (Transform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                          ,pTVar9,0,0,unaff_RDI);
            LOCK();
            UNLOCK();
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (obj == (Transform *)0x0) {
            FUN_?();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pvVar10 = (obj->fields)._._.m_CachedPtr;
          if (pvVar10 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((
              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?();
          }
          if (pTVar9 == (Transform *)0x0) {
            pvVar11 = (void *)0x0;
          }
          else {
            pvVar11 = (pTVar9->fields)._._.m_CachedPtr;
          }
          pcVar3 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
            uVar12 = func_?(&UNK_?);
            FUN_?(uVar12,0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pvVar10,pvVar11,0);
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


/* Void Pop() */

void Assembly-CSharp.dll::JoystickControllerStack::JoystickControllerStack_Pop
               (JoystickControllerStack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<InGameControls>__RemoveAt_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<InGameControls>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<InGameControls>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Pop);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Pop,(MethodInfo *)0x0);
  pLVar1 = (this->fields).controls;
  if (pLVar1 != (List_1_InGameControls_ *)0x0) {
    iVar2 = (pLVar1->fields)._size;
    if ((uint)(pLVar1->fields)._size <= iVar2 - 1U) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar4 = (pLVar1->fields)._items;
    if (pIVar4 != (InGameControls__Array *)0x0) {
      if ((uint)pIVar4->max_length <= iVar2 - 1U) {
code_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = pIVar4->vector[(longlong)iVar2 + -1];
      pLVar1 = (this->fields).controls;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__RemoveAt
                ((List_1_System_Object_ *)pLVar1,(pLVar1->fields)._size + -1,
                 MethodInfo__System__Collections__Generic__List<InGameControls>__RemoveAt_int_);
      if (this_00 != (InGameControls *)0x0) {
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_00,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
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
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                  ((Object_1 *)pGVar5,0.0,(MethodInfo *)0x0);
        pLVar1 = (this->fields).controls;
        if (pLVar1 != (List_1_InGameControls_ *)0x0) {
          iVar2 = (pLVar1->fields)._size;
          if ((uint)(pLVar1->fields)._size <= iVar2 - 1U) goto code_?;
          pIVar4 = (pLVar1->fields)._items;
          if (pIVar4 != (InGameControls__Array *)0x0) {
            if ((uint)pIVar4->max_length <= iVar2 - 1U) goto code_?;
            if ((pIVar4->vector[(longlong)iVar2 + -1] != (InGameControls *)0x0) &&
               (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject
                                   ((Component *)pIVar4->vector[(longlong)iVar2 + -1],
                                    (MethodInfo *)0x0), pGVar5 != (GameObject *)0x0)) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                              ,1,0);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (pGVar5 == (GameObject *)0x0) {
                FUN_?();
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pvVar6 = (pGVar5->fields)._.m_CachedPtr;
              if (pvVar6 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar5,(MethodInfo *)0x0);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pcVar3 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
                uVar7 = func_?(&UNK_?);
                FUN_?(uVar7,0);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam_?)(pvVar6,1);
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


/* Void PushJoystick(ControlType) */

void Assembly-CSharp.dll::JoystickControllerStack::JoystickControllerStack_PushJoystick
               (JoystickControllerStack *this,ControlType__Enum joystickType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Pushing_unknown_joystick);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (joystickType == ControlType__Enum_Avatar) {
    original = (this->fields).avatar;
  }
  else if (joystickType == ControlType__Enum_BasicVehicle) {
    original = (this->fields).basicVehicle;
  }
  else {
    if (joystickType != ControlType__Enum_Jetpack) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar1 = StringLiteral_Pushing_unknown_joystick;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__ILogger);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pIVar2 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar2 == (ILogger_1 *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar2,0,pSVar1);
      return;
    }
    original = (this->fields).jetPackControls;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<InGameControls>__Add_InGameControls_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<InGameControls>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<InGameControls>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  InGameControls_MethodInfo__UnityEngine__Object__Instantiate<InGameControls>_InGameControls_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Controls_prefab_not_set_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (original == (InGameControls *)0x0) {
code_?:
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_Controls_prefab_not_set_,(MethodInfo *)0x0);
    original = (this->fields).avatar;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((original->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_00 = (Component *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       InGameControls_MethodInfo__UnityEngine__Object__Instantiate<InGameControls>_InGameControls_
                      );
  pLVar4 = (this->fields).controls;
  if (pLVar4 == (List_1_InGameControls_ *)0x0) goto code_?;
  if ((pLVar4->fields)._size != 0) {
    iVar5 = (pLVar4->fields)._size;
    if ((uint)(pLVar4->fields)._size <= iVar5 - 1U) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar6 = (pLVar4->fields)._items;
    if (pIVar6 == (InGameControls__Array *)0x0) goto code_?;
    if ((uint)pIVar6->max_length <= iVar5 - 1U) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((pIVar6->vector[(longlong)iVar5 + -1] == (InGameControls *)0x0) ||
       (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pIVar6->vector[(longlong)iVar5 + -1],(MethodInfo *)0x0),
       pGVar7 == (GameObject *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar7,0,(MethodInfo *)0x0);
  }
  if ((this_00 != (Component *)0x0) &&
     (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          (this_00,(MethodInfo *)0x0), pGVar7 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar7,1,(MethodInfo *)0x0);
    pMVar8 = MethodInfo__System__Collections__Generic__List<InGameControls>__Add_InGameControls_;
    pLVar4 = (this->fields).controls;
    if (pLVar4 != (List_1_InGameControls_ *)0x0) {
      piVar9 = &(pLVar4->fields)._version;
      *piVar9 = *piVar9 + 1;
      pIVar6 = (pLVar4->fields)._items;
      if (pIVar6 != (InGameControls__Array *)0x0) {
        uVar10 = (pLVar4->fields)._size;
        if (uVar10 < (uint)pIVar6->max_length) {
          (pLVar4->fields)._size = uVar10 + 1;
          FUN_?(pIVar6,(longlong)(int)uVar10,this_00);
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__AddWithResize
                    ((List_1_System_Object_ *)pLVar4,(Object *)this_00,
                     pMVar8->klass->rgctx_data[0xe].method);
        }
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        (this_00,(MethodInfo *)0x0);
        pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
        if (obj != (Transform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                          ,pTVar11,0,0,unaff_RDI);
            LOCK();
            UNLOCK();
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (obj == (Transform *)0x0) {
            FUN_?();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pvVar12 = (obj->fields)._._.m_CachedPtr;
          if (pvVar12 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((
              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?();
          }
          if (pTVar11 == (Transform *)0x0) {
            pvVar13 = (void *)0x0;
          }
          else {
            pvVar13 = (pTVar11->fields)._._.m_CachedPtr;
          }
          pcVar3 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
            uVar14 = func_?(&UNK_?);
            FUN_?(uVar14,0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pvVar12,pvVar13,0);
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


/* JoystickControllerStack() */

void Assembly-CSharp.dll::JoystickControllerStack::JoystickControllerStack__ctor
               (JoystickControllerStack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<InGameControls>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<InGameControls>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_InGameControls_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<InGameControls>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<InGameControls>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).controls = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).controls >> 0xc);
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

