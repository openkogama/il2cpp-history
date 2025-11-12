
/* Void StartPlaying() */

void Assembly-CSharp.dll::BriefingPlayButton::BriefingPlayButton_StartPlaying
               (BriefingPlayButton *this,MethodInfo *method)

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
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Inequality_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__BriefingPlayButton____c___StartPlaying_b__0_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BriefingPlayButton____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
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
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    pMVar1 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
    if ((pMVar1 == (MVGameControllerDesktop *)0x0) ||
       (in_R8 = (MethodInfo *)(pMVar1->fields).lockCursorManager, in_R8 == (MethodInfo *)0x0))
    goto code_?;
    method = (MethodInfo *)TypeInfo__ILockCursorManager;
    FUN_?();
  }
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
  if (((extraout_RAX != 0) && (*(longlong *)(extraout_RAX + 200) != 0)) &&
     (MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8),
     extraout_RAX_00 != 0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((*(longlong *)(extraout_RAX_00 + 0x90) != 0) &&
       (pDVar2 = *(Dictionary_2_System_Int32Enum_System_Int32Enum_ **)
                  (*(longlong *)(extraout_RAX_00 + 0x90) + 0x10),
       pDVar2 != (Dictionary_2_System_Int32Enum_System_Int32Enum_ *)0x0)) {
      method_00 = 
      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
      ;
      IVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Int32Enum]::Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                        (pDVar2,0,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                        );
      player = (MVPlayer *)(ulonglong)IVar3;
      cVar4 = FUN_?();
      if (cVar4 != '\0') {
        MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
        MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
        if (extraout_RAX_01 == 0) goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (((*(longlong *)(extraout_RAX_01 + 0x90) == 0) ||
            (pDVar2 = *(Dictionary_2_System_Int32Enum_System_Int32Enum_ **)
                       (*(longlong *)(extraout_RAX_01 + 0x90) + 0x10),
            pDVar2 == (Dictionary_2_System_Int32Enum_System_Int32Enum_ *)0x0)) ||
           (IVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Int32Enum]::
                    Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                              (pDVar2,0,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                              ), this_00 == (MVLocalPlayer *)0x0)) goto code_?;
        MVLocalPlayer::MVLocalPlayer_SetActiveSpawnRole(this_00,IVar3,(MethodInfo *)0x0);
      }
      if ((this->fields)._._.shouldPop != 0) {
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__BriefingPlayButton____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__BriefingPlayButton____c);
        }
        this_01 = TypeInfo__BriefingPlayButton____c->static_fields->__9__0_0;
        if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          if (*(int *)&(TypeInfo__BriefingPlayButton____c->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__BriefingPlayButton____c);
          }
          object = TypeInfo__BriefingPlayButton____c->static_fields->__9;
          this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                     MethodInfo__BriefingPlayButton____c___StartPlaying_b__0_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__BriefingPlayButton____c->static_fields->__9__0_0 = this_01;
          if (iRam_? != 0) {
            uVar5 = (uint)((ulonglong)&TypeInfo__BriefingPlayButton____c->static_fields->__9__0_0
                           >> 0xc);
            puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar7 = *puVar6;
              LOCK();
              uVar8 = *puVar6;
              if (uVar7 == uVar8) {
                *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
              }
              UNLOCK();
            } while (uVar7 != uVar8);
          }
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_01
                   ,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pIVar9 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
        if (pIVar9 == (IPlayModeUI *)0x0) goto code_?;
        FUN_?(8,TypeInfo__IPlayModeUI,pIVar9,0);
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

