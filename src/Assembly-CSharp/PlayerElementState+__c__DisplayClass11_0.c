
/* Void <SetupButtons>b__0() */

void Assembly-CSharp.dll::PlayerElementState+<>c__DisplayClass11_0::
     PlayerElementState_c_DisplayClass11_0__SetupButtons_b__0
               (PlayerElementState_c_DisplayClass11_0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PlayerElementState____c__DisplayClass11_1___SetupButtons_b__4_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PlayerElementState____c__DisplayClass11_1);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__PlayerElementState____c__DisplayClass11_1);
  pPVar1 = (this->fields).__4__this;
  if (pPVar1 != (PlayerElementState *)0x0) {
    PlayerElementState::PlayerElementState_ValidateFriendRequest(pPVar1,(MethodInfo *)0x0);
    if (object != (Object *)0x0) {
      object[1].klass = (Object__Class *)::StringLiteral__;
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
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
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (pMVar6 != (MVGameControllerBase *)0x0) {
        pMVar7 = (pMVar6->fields).game;
        if (pMVar7 != (MVNetworkGame *)0x0) {
          this_00 = (pMVar7->fields).operationRequests;
          pMVar8 = (this->fields).player;
          if (pMVar8 != (MVPlayer *)0x0) {
            if (this_00 == (MVNetworkGame_OperationRequests *)0x0) {
              FUN_?();
            }
            else {
              bVar9 = MVNetworkGame+OperationRequests::
                      MVNetworkGame_OperationRequests_RequestFriendShipByID
                                (this_00,(pMVar8->fields)._ProfileID_k__BackingField,
                                 (String **)(object + 1),(MethodInfo *)0x0);
              if (bVar9 != 0) {
                return;
              }
              pPVar1 = (this->fields).__4__this;
              if (pPVar1 != (PlayerElementState *)0x0) {
                root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pPVar1,(MethodInfo *)0x0);
                this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                          FUN_?(
                                       TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                       );
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System
                ::Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                          (this_01,object,
                           MethodInfo__PlayerElementState____c__DisplayClass11_1___SetupButtons_b__4_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                           ,(MethodInfo *)0x0);
                if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c ==
                    0) {
                  FUN_?();
                }
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_ExecuteHierarchy
                          (root,(BaseEventData *)0x0,this_01,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                          );
                return;
              }
            }
            FUN_?();
          }
          FUN_?();
        }
        FUN_?();
      }
      FUN_?();
    }
    FUN_?();
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void <SetupButtons>b__1() */

void Assembly-CSharp.dll::PlayerElementState+<>c__DisplayClass11_0::
     PlayerElementState_c_DisplayClass11_0__SetupButtons_b__1
               (PlayerElementState_c_DisplayClass11_0 *this,MethodInfo *method)

{
  this_00 = (this->fields).__4__this;
  if (this_00 != (PlayerElementState *)0x0) {
    PlayerElementState::PlayerElementState_ValidateFriendRequest(this_00,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar1 != (MVGameControllerBase *)0x0) {
      pMVar2 = (pMVar1->fields).game;
      if (pMVar2 != (MVNetworkGame *)0x0) {
        this_01 = (pMVar2->fields).operationRequests;
        pFVar3 = (this->fields).friend_1;
        if (pFVar3 != (Friend *)0x0) {
          if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RequestAcceptFriendShip
                      (this_01,(pFVar3->fields).friendID,(MethodInfo *)0x0);
            return;
          }
          FUN_?();
        }
        FUN_?();
      }
      FUN_?();
    }
    FUN_?();
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void <SetupButtons>b__3() */

void Assembly-CSharp.dll::PlayerElementState+<>c__DisplayClass11_0::
     PlayerElementState_c_DisplayClass11_0__SetupButtons_b__3
               (PlayerElementState_c_DisplayClass11_0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 == (MVGameControllerBase *)0x0) ||
       (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
      (pFVar3 = (this->fields).friend_1, pFVar3 == (Friend *)0x0)) ||
     (pMVar4 = (pMVar2->fields).operationRequests, pMVar4 == (MVNetworkGame_OperationRequests *)0x0)
     ) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar6 = (pFVar3->fields).friendID;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  ,iVar6,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = iVar6;
  value = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar7 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x34);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x34,value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2)
               ,method_00);
    pPVar8 = (pMVar4->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar8 != (PhotonPeer *)0x0) {
      (*(pPVar8->klass->vtable).SendOperation.methodPtr)
                (pPVar8,CONCAT71((int7)((ulonglong)uVar7 >> 8),0x11),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar8->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

