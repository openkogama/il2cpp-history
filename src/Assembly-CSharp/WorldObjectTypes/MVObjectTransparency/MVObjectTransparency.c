
/* Void AdjustTransparency(Boolean) */

void Assembly-CSharp.dll::WorldObjectTypes::MVObjectTransparency::MVObjectTransparency::
     MVObjectTransparency_AdjustTransparency
               (MVObjectTransparency *this,bool currentlyIsHot,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
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
    FUN_?(&StringLiteral_AdjustTransparency_invalid_world);
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
          currentlyIsHot = 1;
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
          *(bool *)((longlong)&LStack_3._current[1].monitor + 4) = currentlyIsHot;
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
          key = *(int32_t *)&pOVar12[1].monitor;
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
          this_00 = (pMVar14->fields)._.worldObjects;
          if (this_00 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
code_?:
            FUN_?();
            goto code_?;
          }
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__TryGetValue
                    ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,(Object **)&pMStackX_20
                     ,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                    );
          if (pMStackX_20 == (MVCubeModelBase *)0x0) {
            FUN_?();
            goto code_?;
          }
          pMVar15 = pMStackX_20->klass;
          bVar16 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
          if ((((pMVar15->_1).naturalAligment < bVar16) ||
              ((MVCubeModelBase__Class *)(pMVar15->_1).typeHierarchy[(ulonglong)bVar16 - 1] !=
               TypeInfo__MVCubeModelBase)) || (pMStackX_20 == (MVCubeModelBase *)0x0)) {
            plVar17 = (longlong *)FUN_?(&(pMVar15->_0).byval_arg);
            pSVar18 = StringLiteral_AdjustTransparency_invalid_world;
            str1 = (String *)0x0;
            if (plVar17 != (longlong *)0x0) {
              str1 = (String *)
                     (**(code **)(*plVar17 + 0x168))(plVar17,*(undefined8 *)(*plVar17 + 0x170));
            }
            pSVar18 = mscorlib.dll::System::String::String_Concat_4(pSVar18,str1,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)pSVar18,(MethodInfo *)0x0);
          }
          else {
            MVCubeModelBase::MVCubeModelBase_ObjectLinkTransparency(pMStackX_20,(MethodInfo *)0x0);
          }
        }
        FUN_?();
code_?:
        FUN_?();
        FUN_?();
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::WorldObjectTypes::MVObjectTransparency::MVObjectTransparency::
     MVObjectTransparency_Destroy(MVObjectTransparency *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<EditModeChangeArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__WorldObjectTypes__MVObjectTransparency__MVObjectTransparency__OnEditModeChange_EditModeChangeArgs_
                 );
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

void Assembly-CSharp.dll::WorldObjectTypes::MVObjectTransparency::MVObjectTransparency::
     MVObjectTransparency_Initialize(MVObjectTransparency *this,MethodInfo *method)

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
                  MethodInfo__WorldObjectTypes__MVObjectTransparency__MVObjectTransparency__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__WorldObjectTypes__MVObjectTransparency__MVObjectTransparency__OnEditModeChange_EditModeChangeArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  this_01 = (Action_2_Int32Enum_Object_ *)
            FUN_?(TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
  mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__WorldObjectTypes__MVObjectTransparency__MVObjectTransparency__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
             ,(MethodInfo *)0x0);
  pIVar1 = LogicClientsideFactory::LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                     ((MVWorldObject *)this,1,(Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                      (Action_2_LogicInputState_LogicObjectManager_ *)this_01,(MethodInfo *)0x0);
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
  MVObjectTransparency_UpdateTransparency(this,(MethodInfo *)0x0);
  this_00 = (this->fields).goObjectTransparency;
  if (this_00 != (ObjectTransparency *)0x0) {
    lodGameObject =
         UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this_00,(MethodInfo *)0x0);
    MVLogicObject::MVLogicObject_SetupCulling
              ((MVLogicObject *)this,lodGameObject,TypeRef__System__Activator__T._0_4_,
               (MethodInfo *)0x0);
    cVar7 = cRam_?;
    if ((this->fields).goObjectTransparency != (ObjectTransparency *)0x0) {
      (this->fields).isInitialized = 1;
      if (cVar7 == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cVar7 = '\x01';
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
          (IEditModeUI *)0x0) {
        if (cVar7 == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
            (IEditModeUI *)0x0) goto code_?;
        pDVar8 = (Delegate *)FUN_?();
        b = (Delegate *)FUN_?(TypeInfo__System__Action<EditModeChangeArgs>);
        FUN_?(b,this);
        pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine(pDVar8,b,(MethodInfo *)0x0);
        pAVar9 = TypeInfo__System__Action<EditModeChangeArgs>;
        if ((pDVar8 != (Delegate *)0x0) &&
           (lVar10 = FUN_?(pDVar8,TypeInfo__System__Action<EditModeChangeArgs>), lVar10 == 0))
        {
          FUN_?(pDVar8,pAVar9);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        FUN_?();
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void InputStateUpdateCallback(LogicInputState, LogicObjectManager) */

void Assembly-CSharp.dll::WorldObjectTypes::MVObjectTransparency::MVObjectTransparency::
     MVObjectTransparency_InputStateUpdateCallback
               (MVObjectTransparency *this,LogicInputState__Enum logicInputState,
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
    currentlyIsHot = FUN_?(1,TypeInfo__IInputSignalReceiver);
    MVObjectTransparency_AdjustTransparency(this,currentlyIsHot,(MethodInfo *)0x0);
    pOVar1 = (this->fields).goObjectTransparency;
    if (pOVar1 != (ObjectTransparency *)0x0) {
      (pOVar1->fields)._IsDrawingEnabled_k__BackingField = currentlyIsHot;
      pOVar1 = (this->fields).goObjectTransparency;
      if (pOVar1 != (ObjectTransparency *)0x0) {
        (pOVar1->fields)._Transparency_k__BackingField =
             (this->fields)._Transparency_k__BackingField;
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::WorldObjectTypes::MVObjectTransparency::MVObjectTransparency::
     MVObjectTransparency_OnDataUpdate(MVObjectTransparency *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IInputSignalReceiver);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  hashtable = (this->fields)._._._.data;
  if (*(int *)&(TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys);
  }
  pSVar1 = TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->
            static_fields->Alpha;
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar2 = Extensions::Extensions_GetValueOrDefault_4
                     (hashtable,pSVar1,_UNK_?,
                      float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                     );
  (this->fields)._Transparency_k__BackingField = fVar2;
  if ((this->fields)._InputSignalReceiver_k__BackingField == (IInputSignalReceiver *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar4 = FUN_?(1,TypeInfo__IInputSignalReceiver);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,uVar4,0);
    LOCK();
    UNLOCK();
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
    FUN_?(&StringLiteral_AdjustTransparency_invalid_world);
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
  pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar5 != (MVGameControllerBase *)0x0) && ((pMVar5->fields).game != (MVNetworkGame *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar5 != (MVGameControllerBase *)0x0) {
      cVar6 = (*(pMVar5->klass->vtable).__unknown_1.methodPtr)
                         (pMVar5,(pMVar5->klass->vtable).__unknown_1.method);
      if (cVar6 == '\0') {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (pMVar5 == (MVGameControllerBase *)0x0) goto code_?;
        if ((pMVar5->fields)._joinState == 3) {
          uVar4 = 1;
        }
      }
      LStack_7._list = (List_1_System_Object_ *)(this->fields)._._._.objectLinkRefs;
      if ((List_1_MV_WorldObject_ObjectLink_ *)LStack_7._list !=
          (List_1_MV_WorldObject_ObjectLink_ *)0x0) {
        if (iRam_? != 0) {
          uVar8 = (uint)((ulonglong)&uStack_9 >> 0xc);
          puVar10 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar11 = *puVar10;
            LOCK();
            uVar12 = *puVar10;
            if (uVar11 == uVar12) {
              *puVar10 = uVar11 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (uVar11 != uVar12);
        }
        pLStack_13 = (List_1_T_Enumerator_System_Object_ *)
                     ((ulonglong)
                      (uint)(((List_1_MV_WorldObject_ObjectLink_ *)LStack_7._list)->fields).
                            _version << 0x20);
        puStack_14 = (undefined *)0x0;
        LStack_7._8_8_ = pLStack_13;
        LStack_7._current = (Object *)0x0;
        uStack_9 = 0;
        pLStack_13 = &LStack_7;
        while( true ) {
          bVar15 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_7,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::ObjectLink>__MoveNext__
                             );
          pOVar16 = LStack_7._current;
          if (bVar15 == 0) {
            return;
          }
          if (LStack_7._current == (Object *)0x0) goto code_?;
          *(undefined1 *)((longlong)&LStack_7._current[1].monitor + 4) = uVar4;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (pMVar5 == (MVGameControllerBase *)0x0) break;
          pMVar17 = (pMVar5->fields).game;
          if (pMVar17 == (MVNetworkGame *)0x0) {
code_?:
            FUN_?();
            break;
          }
          if ((pMVar17->fields).worldNetwork == (WorldNetwork *)0x0) {
code_?:
            FUN_?();
            goto code_?;
          }
          pMVar18 = (((pMVar17->fields).worldNetwork)->fields)._.worldObjectClientManager;
          key = *(int32_t *)&pOVar16[1].monitor;
          if (pMVar18 == (MVWorldObjectClientManagerNetwork *)0x0) goto code_?;
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMStackX_20 = (MVCubeModelBase *)0x0;
          this_00 = (pMVar18->fields)._.worldObjects;
          if (this_00 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
code_?:
            FUN_?();
            goto code_?;
          }
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__TryGetValue
                    ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,(Object **)&pMStackX_20
                     ,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                    );
          if (pMStackX_20 == (MVCubeModelBase *)0x0) {
            FUN_?();
            goto code_?;
          }
          pMVar19 = pMStackX_20->klass;
          bVar20 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
          if ((((pMVar19->_1).naturalAligment < bVar20) ||
              ((MVCubeModelBase__Class *)(pMVar19->_1).typeHierarchy[(ulonglong)bVar20 - 1] !=
               TypeInfo__MVCubeModelBase)) || (pMStackX_20 == (MVCubeModelBase *)0x0)) {
            plVar21 = (longlong *)FUN_?(&(pMVar19->_0).byval_arg);
            pSVar1 = StringLiteral_AdjustTransparency_invalid_world;
            str1 = (String *)0x0;
            if (plVar21 != (longlong *)0x0) {
              str1 = (String *)
                     (**(code **)(*plVar21 + 0x168))(plVar21,*(undefined8 *)(*plVar21 + 0x170));
            }
            pSVar1 = mscorlib.dll::System::String::String_Concat_4(pSVar1,str1,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)pSVar1,(MethodInfo *)0x0);
          }
          else {
            MVCubeModelBase::MVCubeModelBase_ObjectLinkTransparency(pMStackX_20,(MethodInfo *)0x0);
          }
        }
        FUN_?();
code_?:
        FUN_?();
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnObjectLinkChanged(ObjectLinkChangeType, ObjectLink) */

void Assembly-CSharp.dll::WorldObjectTypes::MVObjectTransparency::MVObjectTransparency::
     MVObjectTransparency_OnObjectLinkChanged
               (MVObjectTransparency *this,ObjectLinkChangeType__Enum changeType,
               ObjectLink *objectLink,MethodInfo *method)

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
    currentlyIsHot = FUN_?(1,TypeInfo__IInputSignalReceiver);
    MVObjectTransparency_AdjustTransparency(this,currentlyIsHot,(MethodInfo *)0x0);
    pOVar1 = (this->fields).goObjectTransparency;
    if (pOVar1 != (ObjectTransparency *)0x0) {
      (pOVar1->fields)._IsDrawingEnabled_k__BackingField = currentlyIsHot;
      pOVar1 = (this->fields).goObjectTransparency;
      if (pOVar1 != (ObjectTransparency *)0x0) {
        (pOVar1->fields)._Transparency_k__BackingField =
             (this->fields)._Transparency_k__BackingField;
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::WorldObjectTypes::MVObjectTransparency::MVObjectTransparency::
     MVObjectTransparency_Reset(MVObjectTransparency *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IInputSignalReceiver,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._InputSignalReceiver_k__BackingField != (IInputSignalReceiver *)0x0) {
    currentlyIsHot = FUN_?(1,TypeInfo__IInputSignalReceiver);
    MVObjectTransparency_AdjustTransparency(this,currentlyIsHot,(MethodInfo *)0x0);
    pOVar1 = (this->fields).goObjectTransparency;
    if (pOVar1 != (ObjectTransparency *)0x0) {
      (pOVar1->fields)._IsDrawingEnabled_k__BackingField = currentlyIsHot;
      pOVar1 = (this->fields).goObjectTransparency;
      if (pOVar1 != (ObjectTransparency *)0x0) {
        (pOVar1->fields)._Transparency_k__BackingField =
             (this->fields)._Transparency_k__BackingField;
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateTransparency() */

void Assembly-CSharp.dll::WorldObjectTypes::MVObjectTransparency::MVObjectTransparency::
     MVObjectTransparency_UpdateTransparency(MVObjectTransparency *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IInputSignalReceiver);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._InputSignalReceiver_k__BackingField != (IInputSignalReceiver *)0x0) {
    currentlyIsHot = FUN_?(1,TypeInfo__IInputSignalReceiver);
    MVObjectTransparency_AdjustTransparency(this,currentlyIsHot,(MethodInfo *)0x0);
    pOVar1 = (this->fields).goObjectTransparency;
    if (pOVar1 != (ObjectTransparency *)0x0) {
      (pOVar1->fields)._IsDrawingEnabled_k__BackingField = currentlyIsHot;
      pOVar1 = (this->fields).goObjectTransparency;
      if (pOVar1 != (ObjectTransparency *)0x0) {
        (pOVar1->fields)._Transparency_k__BackingField =
             (this->fields)._Transparency_k__BackingField;
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean ValidateObjectLinkTarget(MVWorldObjectClient) */

bool Assembly-CSharp.dll::WorldObjectTypes::MVObjectTransparency::MVObjectTransparency::
     MVObjectTransparency_ValidateObjectLinkTarget
               (MVObjectTransparency *this,MVWorldObjectClient *wo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVBlueprintBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelInstance);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (wo != (MVWorldObjectClient *)0x0) {
    bVar1 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
    if ((bVar1 <= (wo->klass->_1).naturalAligment) &&
       ((MVCubeModelInstance__Class *)(wo->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] ==
        TypeInfo__MVCubeModelInstance)) {
      pMVar2 = (wo->fields).group;
      pMVar3 = (MVGroup *)0x0;
      if (pMVar2 != (MVGroup *)0x0) {
        bVar1 = (TypeInfo__MVBlueprintBase->_1).naturalAligment;
        if (((pMVar2->klass->_1).naturalAligment < bVar1) ||
           (bVar4 = true,
           (MVBlueprintBase__Class *)(pMVar2->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] !=
           TypeInfo__MVBlueprintBase)) {
          bVar4 = false;
        }
        if (bVar4) {
          pMVar3 = pMVar2;
        }
      }
      return pMVar3 == (MVGroup *)0x0;
    }
  }
  return 0;
}


/* MVObjectTransparency(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::WorldObjectTypes::MVObjectTransparency::MVObjectTransparency::
     MVObjectTransparency__ctor
               (MVObjectTransparency *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__WorldObjectTypes__MVObjectTransparency__MVObjectTransparencyObject);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,
               (ObjectPrefab *)(pPVar1->fields).mvObjectTransparencyPrefab,worldObjects,
               (MethodInfo *)0x0);
    piVar2 = &(this->fields)._._.interactionFlags;
    *piVar2 = *piVar2 | 0x18000;
    pOVar3 = (this->fields)._._.component;
    (this->fields)._Transparency_k__BackingField = 0.9;
    (this->fields)._ShowingOutline_k__BackingField = 1;
    if (pOVar3 != (ObjectPrefab *)0x0) {
      bVar4 = (TypeInfo__WorldObjectTypes__MVObjectTransparency__MVObjectTransparencyObject->_1).
              naturalAligment;
      if (((pOVar3->klass->_1).naturalAligment < bVar4) ||
         ((pOVar3->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
          (Il2CppClass *)
          TypeInfo__WorldObjectTypes__MVObjectTransparency__MVObjectTransparencyObject)) {
        FUN_?(pOVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (this->fields).goObjectTransparency = (ObjectTransparency *)pOVar3[1].klass;
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&(this->fields).goObjectTransparency >> 0xc);
        uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        do {
          uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
          puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      iVar11 = iRam_?;
      pOVar12 = (this->fields).goObjectTransparency;
      if (pOVar12 != (ObjectTransparency *)0x0) {
        (pOVar12->fields).woObjectTransparency = this;
        if (iVar11 != 0) {
          uVar6 = (uint)((ulonglong)&(pOVar12->fields).woObjectTransparency >> 0xc);
          uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
          do {
            uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
            puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::WorldObjectTypes::MVObjectTransparency::MVObjectTransparency::
MVObjectTransparency_get_DocumentationType(MVObjectTransparency *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_ModelTransparency;
}


/* Single get_Transparency() */

float Assembly-CSharp.dll::WorldObjectTypes::MVObjectTransparency::MVObjectTransparency::
      MVObjectTransparency_get_Transparency(MVObjectTransparency *this,MethodInfo *method)

{
  return (this->fields)._Transparency_k__BackingField;
}


/* Void set_Transparency(Single) */

void Assembly-CSharp.dll::WorldObjectTypes::MVObjectTransparency::MVObjectTransparency::
     MVObjectTransparency_set_Transparency
               (MVObjectTransparency *this,float value,MethodInfo *method)

{
  (this->fields)._Transparency_k__BackingField = value;
  return;
}

