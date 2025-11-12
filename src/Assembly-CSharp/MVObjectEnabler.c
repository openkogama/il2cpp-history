
/* Void Destroy() */

void Assembly-CSharp.dll::MVObjectEnabler::MVObjectEnabler_Destroy
               (MVObjectEnabler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<EditModeChangeArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVObjectEnabler__OnEditModeChange_EditModeChangeArgs_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
      (IEditModeUI *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
        (IEditModeUI *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pDVar2 = (Delegate *)FUN_?();
    value = (Delegate *)FUN_?(TypeInfo__System__Action<EditModeChangeArgs>);
    FUN_?(value,this);
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove(pDVar2,value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<EditModeChangeArgs>;
    if (pDVar2 != (Delegate *)0x0) {
      lVar4 = FUN_?(pDVar2,TypeInfo__System__Action<EditModeChangeArgs>);
      if (lVar4 == 0) {
        FUN_?(pDVar2,pAVar3);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FUN_?();
  }
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVObjectEnabler::MVObjectEnabler_Initialize
               (MVObjectEnabler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<EditModeChangeArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVObjectEnabler__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVObjectEnabler__OnEditModeChange_EditModeChangeArgs_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  this_00 = (Action_2_Int32Enum_Object_ *)
            FUN_?(TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
  mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__MVObjectEnabler__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
             ,(MethodInfo *)0x0);
  pIVar1 = LogicClientsideFactory::LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                     ((MVWorldObject *)this,1,(Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                      (Action_2_LogicInputState_LogicObjectManager_ *)this_00,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._InputSignalReceiver_k__BackingField = pIVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._InputSignalReceiver_k__BackingField >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  (*(this->klass->vtable).OnDataUpdate.methodPtr)(this);
  MVObjectEnabler_UpdateShowObjects(this,(MethodInfo *)0x0);
  pOVar7 = (this->fields).goObjectEnabler;
  if (pOVar7 != (ObjectEnabler *)0x0) {
    lodGameObject =
         UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)pOVar7,(MethodInfo *)0x0);
    MVLogicObject::MVLogicObject_SetupCulling
              ((MVLogicObject *)this,lodGameObject,TypeRef__System__Activator__T._0_4_,
               (MethodInfo *)0x0);
    pOVar7 = (this->fields).goObjectEnabler;
    if (pOVar7 != (ObjectEnabler *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UpdateController);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_Default);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
        FUN_?();
      }
      UpdateController::UpdateController_AddUpdateObject
                ((IUpdatecontrollerSubscriberUpdate *)pOVar7,
                 UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,(MethodInfo *)0x0);
      iVar8 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                        (StringLiteral_Default,(MethodInfo *)0x0);
      (pOVar7->fields).nameToLayer = iVar8;
      pCVar9 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
      bVar2 = iRam_? != 0;
      (pOVar7->fields).mainCamera = pCVar9;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(pOVar7->fields).mainCamera >> 0xc);
        uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      cVar10 = cRam_?;
      (this->fields).isInitialized = 1;
      if (cVar10 == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cVar10 = '\x01';
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
          (IEditModeUI *)0x0) {
        if (cVar10 == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
            (IEditModeUI *)0x0) goto code_?;
        pDVar11 = (Delegate *)FUN_?();
        b = (Delegate *)FUN_?(TypeInfo__System__Action<EditModeChangeArgs>);
        FUN_?(b,this);
        pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine(pDVar11,b,(MethodInfo *)0x0);
        pAVar12 = TypeInfo__System__Action<EditModeChangeArgs>;
        if ((pDVar11 != (Delegate *)0x0) &&
           (lVar13 = FUN_?(pDVar11,TypeInfo__System__Action<EditModeChangeArgs>), lVar13 == 0
           )) {
          FUN_?(pDVar11,pAVar12);
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        FUN_?();
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void InputStateUpdateCallback(LogicInputState, LogicObjectManager) */

void Assembly-CSharp.dll::MVObjectEnabler::MVObjectEnabler_InputStateUpdateCallback
               (MVObjectEnabler *this,LogicInputState__Enum logicInputState,
               LogicObjectManager *logicObjectManager,MethodInfo *method)

{
  if ((logicInputState != LogicInputState__Enum_FromColdToHot) &&
     (logicInputState != LogicInputState__Enum_FromHotToCold)) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IInputSignalReceiver,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._InputSignalReceiver_k__BackingField != (IInputSignalReceiver *)0x0) {
    visible = FUN_?(1,TypeInfo__IInputSignalReceiver);
    MVObjectEnabler_ShowObjects(this,visible,(MethodInfo *)0x0);
    pOVar1 = (this->fields).goObjectEnabler;
    if (pOVar1 != (ObjectEnabler *)0x0) {
      (pOVar1->fields)._IsDrawingEnabled_k__BackingField = visible;
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVObjectEnabler::MVObjectEnabler_OnDataUpdate
               (MVObjectEnabler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_showOutline);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  hashtable = (this->fields)._._._.data;
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = Extensions::Extensions_GetValueOrDefault
                    (hashtable,StringLiteral_showOutline,1,
                     bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                    );
  (this->fields).showingOutline = bVar1;
  return;
}


/* Void OnObjectLinkChanged(ObjectLinkChangeType, ObjectLink) */

void Assembly-CSharp.dll::MVObjectEnabler::MVObjectEnabler_OnObjectLinkChanged
               (MVObjectEnabler *this,ObjectLinkChangeType__Enum changeType,ObjectLink *objectLink,
               MethodInfo *method)

{
  if ((this->fields).isInitialized == 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IInputSignalReceiver,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._InputSignalReceiver_k__BackingField != (IInputSignalReceiver *)0x0) {
    visible = FUN_?(1,TypeInfo__IInputSignalReceiver);
    MVObjectEnabler_ShowObjects(this,visible,(MethodInfo *)0x0);
    pOVar1 = (this->fields).goObjectEnabler;
    if (pOVar1 != (ObjectEnabler *)0x0) {
      (pOVar1->fields)._IsDrawingEnabled_k__BackingField = visible;
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVObjectEnabler::MVObjectEnabler_Reset
               (MVObjectEnabler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IInputSignalReceiver,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._InputSignalReceiver_k__BackingField != (IInputSignalReceiver *)0x0) {
    visible = FUN_?(1,TypeInfo__IInputSignalReceiver);
    MVObjectEnabler_ShowObjects(this,visible,(MethodInfo *)0x0);
    pOVar1 = (this->fields).goObjectEnabler;
    if (pOVar1 != (ObjectEnabler *)0x0) {
      (pOVar1->fields)._IsDrawingEnabled_k__BackingField = visible;
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ShowObjects(Boolean) */

void Assembly-CSharp.dll::MVObjectEnabler::MVObjectEnabler_ShowObjects
               (MVObjectEnabler *this,bool visible,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::ObjectLink>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::ObjectLink>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::ObjectLink>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVMovable);
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
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) && ((pMVar1->fields).game != (MVNetworkGame *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar1 != (MVGameControllerBase *)0x0) {
      cVar2 = (*(pMVar1->klass->vtable).__unknown_1.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable).__unknown_1.method);
      if (cVar2 == '\0') {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (pMVar1 == (MVGameControllerBase *)0x0) goto code_?;
        if ((pMVar1->fields)._joinState == 3) {
          visible = 1;
        }
      }
      LStack_3._list = (List_1_System_Object_ *)(this->fields)._._._.objectLinkRefs;
      if ((List_1_MV_WorldObject_ObjectLink_ *)LStack_3._list !=
          (List_1_MV_WorldObject_ObjectLink_ *)0x0) {
        if (iRam_? != 0) {
          uVar4 = (uint)((ulonglong)&uStack_5 >> 0xc);
          puVar6 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar7 = *puVar6;
            LOCK();
            uVar8 = *puVar6;
            if (uVar7 == uVar8) {
              *puVar6 = uVar7 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (uVar7 != uVar8);
        }
        pLStack_9 = (List_1_T_Enumerator_System_Object_ *)
                     ((ulonglong)
                      (uint)(((List_1_MV_WorldObject_ObjectLink_ *)LStack_3._list)->fields).
                            _version << 0x20);
        uStack_10 = 0;
        LStack_3._8_8_ = pLStack_9;
        LStack_3._current = (Object *)0x0;
        uStack_5 = 0;
        pLStack_9 = &LStack_3;
        while( true ) {
          bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_3,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::ObjectLink>__MoveNext__
                             );
          pOVar12 = LStack_3._current;
          if (bVar11 == 0) {
            return;
          }
          if (LStack_3._current == (Object *)0x0) goto code_?;
          *(bool *)((longlong)&LStack_3._current[1].monitor + 4) = visible;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (pMVar1 == (MVGameControllerBase *)0x0) break;
          pMVar13 = (pMVar1->fields).game;
          if (pMVar13 == (MVNetworkGame *)0x0) {
code_?:
            FUN_?();
            break;
          }
          if ((pMVar13->fields).worldNetwork == (WorldNetwork *)0x0) {
code_?:
            FUN_?();
            goto code_?;
          }
          pMVar14 = (((pMVar13->fields).worldNetwork)->fields)._.worldObjectClientManager;
          iVar15 = *(int32_t *)&pOVar12[1].monitor;
          if (pMVar14 == (MVWorldObjectClientManagerNetwork *)0x0) goto code_?;
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMStackX_20 = (MVCubeModelBase *)0x0;
          pDVar16 = (pMVar14->fields)._.worldObjects;
          if (pDVar16 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
code_?:
            FUN_?();
            goto code_?;
          }
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__TryGetValue
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar16,iVar15,
                     (Object **)&pMStackX_20,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                    );
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (pMVar1 == (MVGameControllerBase *)0x0) {
code_?:
            FUN_?();
            goto code_?;
          }
          pMVar13 = (pMVar1->fields).game;
          if (pMVar13 == (MVNetworkGame *)0x0) {
code_?:
            FUN_?();
            goto code_?;
          }
          pMVar17 = (MVCubeModelBase *)0x0;
          if ((pMVar13->fields).worldNetwork != (WorldNetwork *)0x0) {
            pMVar17 = (MVCubeModelBase *)
                      (((pMVar13->fields).worldNetwork)->fields)._.worldObjectClientManager;
          }
          if (pMStackX_20 == (MVCubeModelBase *)0x0) {
code_?:
            FUN_?();
            goto code_?;
          }
          iVar15 = (pMStackX_20->fields)._._.groupId;
          if (pMVar17 == (MVCubeModelBase *)0x0) {
code_?:
            FUN_?();
            goto code_?;
          }
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          this_00 = pMStackX_20;
          apOStack_18[0] = (Object *)0x0;
          pDVar16 = *(Dictionary_2_System_Int32_MVWorldObjectClient_ **)&(pMVar17->fields)._._;
          if (pDVar16 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
code_?:
            FUN_?();
            goto code_?;
          }
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__TryGetValue
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar16,iVar15,apOStack_18,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                    );
          if (apOStack_18[0] == (Object *)0x0) {
code_?:
            pMVar19 = this_00->klass;
            bVar20 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
            if ((((pMVar19->_1).naturalAligment < bVar20) ||
                ((MVCubeModelBase__Class *)(pMVar19->_1).typeHierarchy[(ulonglong)bVar20 - 1] !=
                 TypeInfo__MVCubeModelBase)) || (this_00 == (MVCubeModelBase *)0x0)) {
              (*(pMVar19->vtable).set_Visible.methodPtr)
                        (this_00,(ulonglong)visible,(pMVar19->vtable).set_Visible.method);
            }
            else {
              MVCubeModelBase::MVCubeModelBase_ObjectLinkChanged(this_00,visible,(MethodInfo *)0x0);
            }
          }
          else {
            pOVar21 = apOStack_18[0]->klass;
            bVar20 = (TypeInfo__MVMovable->_1).naturalAligment;
            if ((((pOVar21->_1).naturalAligment < bVar20) ||
                ((MVMovable__Class *)(pOVar21->_1).typeHierarchy[(ulonglong)bVar20 - 1] !=
                 TypeInfo__MVMovable)) || (apOStack_18[0] == (Object *)0x0))
            goto code_?;
            (*(code *)pOVar21[4]._0.parent)(apOStack_18[0],visible,pOVar21[4]._0.generic_class);
            bVar20 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
            if ((((this_00->klass->_1).naturalAligment < bVar20) ||
                ((MVCubeModelBase__Class *)(this_00->klass->_1).typeHierarchy[(ulonglong)bVar20 - 1]
                 != TypeInfo__MVCubeModelBase)) || (this_00 == (MVCubeModelBase *)0x0)) {
              FUN_?();
              goto code_?;
            }
            pMVar17 = (MVCubeModelBase *)0x0;
            if ((MVCubeModelBase__Class *)
                (this_00->klass->_1).typeHierarchy
                [(ulonglong)(TypeInfo__MVCubeModelBase->_1).naturalAligment - 1] ==
                TypeInfo__MVCubeModelBase) {
              pMVar17 = this_00;
            }
            MVCubeModelBase::MVCubeModelBase_ObjectLinkChanged(pMVar17,visible,(MethodInfo *)0x0);
          }
        }
        FUN_?();
code_?:
        FUN_?();
        FUN_?();
        pcVar22 = (code *)swi(3);
        (*pcVar22)();
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void UpdateShowObjects() */

void Assembly-CSharp.dll::MVObjectEnabler::MVObjectEnabler_UpdateShowObjects
               (MVObjectEnabler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IInputSignalReceiver);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._InputSignalReceiver_k__BackingField != (IInputSignalReceiver *)0x0) {
    visible = FUN_?(1,TypeInfo__IInputSignalReceiver);
    MVObjectEnabler_ShowObjects(this,visible,(MethodInfo *)0x0);
    pOVar1 = (this->fields).goObjectEnabler;
    if (pOVar1 != (ObjectEnabler *)0x0) {
      (pOVar1->fields)._IsDrawingEnabled_k__BackingField = visible;
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean ValidateObjectLinkTarget(MVWorldObjectClient) */

bool Assembly-CSharp.dll::MVObjectEnabler::MVObjectEnabler_ValidateObjectLinkTarget
               (MVObjectEnabler *this,MVWorldObjectClient *wo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVCubeModelInstance);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (MVWorldObjectClient *)0x0;
  if (wo != (MVWorldObjectClient *)0x0) {
    bVar2 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
    if (((wo->klass->_1).naturalAligment < bVar2) ||
       (bVar3 = true,
       (MVCubeModelInstance__Class *)(wo->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
       TypeInfo__MVCubeModelInstance)) {
      bVar3 = false;
    }
    if (bVar3) {
      pMVar1 = wo;
    }
  }
  return pMVar1 != (MVWorldObjectClient *)0x0;
}


/* MVObjectEnabler(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVObjectEnabler::MVObjectEnabler__ctor
               (MVObjectEnabler *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVObjectEnablerObject);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  (this->fields).showingOutline = 1;
  if (bVar1) {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar2 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(ObjectPrefab *)(pPVar2->fields).mvObjectEnablerPrefab,
               worldObjects,(MethodInfo *)0x0);
    piVar3 = &(this->fields)._._.interactionFlags;
    *piVar3 = *piVar3 | 0x18000;
    pOVar4 = (this->fields)._._.component;
    if (pOVar4 != (ObjectPrefab *)0x0) {
      bVar5 = (TypeInfo__MVObjectEnablerObject->_1).naturalAligment;
      if (((pOVar4->klass->_1).naturalAligment < bVar5) ||
         ((pOVar4->klass->_1).typeHierarchy[(ulonglong)bVar5 - 1] !=
          (Il2CppClass *)TypeInfo__MVObjectEnablerObject)) {
        FUN_?(pOVar4);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (this->fields).goObjectEnabler = (ObjectEnabler *)pOVar4[1].klass;
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)&(this->fields).goObjectEnabler >> 0xc);
        lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
        do {
          uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
          puVar10 = (ulonglong *)(lVar8 + 0xADDR);
          LOCK();
          bVar1 = uVar9 == *puVar10;
          if (bVar1) {
            *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      iVar11 = iRam_?;
      pOVar12 = (this->fields).goObjectEnabler;
      if (pOVar12 != (ObjectEnabler *)0x0) {
        (pOVar12->fields).woObjectEnabler = this;
        if (iVar11 != 0) {
          uVar7 = (uint)((ulonglong)&(pOVar12->fields).woObjectEnabler >> 0xc);
          lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
          do {
            uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
            puVar10 = (ulonglong *)(lVar8 + 0xADDR);
            LOCK();
            bVar1 = uVar9 == *puVar10;
            if (bVar1) {
              *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar1);
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

