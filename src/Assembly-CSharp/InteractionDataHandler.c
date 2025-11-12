
/* Boolean HandleInteraction(MVPickupOwner, InteractionData, Boolean) */

bool Assembly-CSharp.dll::InteractionDataHandler::InteractionDataHandler_HandleInteraction
               (InteractionDataHandler *this,MVPickupOwner *interactor,InteractionData *interaction,
               bool interactionIsLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__InteractionData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (interactionIsLocal == 0) {
    bVar1 = InteractionDataHandlerBase::InteractionDataHandlerBase_IsFriendlyFire
                      ((InteractionDataHandlerBase *)this,interactor,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVAvatarRemote);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar2 = (this->fields)._._.worldObjectParent;
      if (pMVar2 != (MVWorldObjectClient *)0x0) {
        bVar3 = (TypeInfo__MVAvatarRemote->_1).naturalAligment;
        if ((bVar3 <= (pMVar2->klass->_1).naturalAligment) &&
           ((MVAvatarRemote__Class *)(pMVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] ==
            TypeInfo__MVAvatarRemote)) {
          lVar4 = *(longlong *)&pMVar2[1].fields._.position.z;
          if ((lVar4 == 0) ||
             (pOVar5 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                                 (*(Object **)(lVar4 + 0x18),(MethodInfo *)0x0),
             pOVar5 == (Object *)0x0)) goto code_?;
          if ((pOVar5->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
            FUN_?(pOVar5);
            pcVar6 = (code *)swi(3);
            bVar1 = (*pcVar6)();
            return bVar1;
          }
          if (((ulonglong)pOVar5[1].klass & 2) != 0) {
            return 1;
          }
        }
      }
      pMVar2 = (this->fields)._._.worldObjectParent;
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      lVar4 = lRam_?;
      uStackX_20 = 0;
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar5 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar5 + 1,&uStackX_20,(longlong)*(int *)(lVar4 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar7 = (uint)((ulonglong)(pOVar5 + 1) >> 0xc);
            puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar9 = *puVar8;
              LOCK();
              uVar10 = *puVar8;
              if (uVar9 == uVar10) {
                *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
              }
              UNLOCK();
            } while (uVar9 != uVar10);
          }
        }
        else {
          pOVar5 = (Object *)0x0;
        }
      }
      else {
        pOVar5 = (Object *)((ulonglong)uStackX_21 << 8);
      }
      if (*(int *)&(TypeInfo__MV__WorldObject__InteractionData->_1).field_0x1c == 0) {
        FUN_?();
      }
      value = MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData_ToByteArray
                        (interaction,(MethodInfo *)0x0);
      if ((this_00 ==
           (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
            *)0x0) ||
         (method_00 = MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      ->klass->rgctx_data[0x22].method,
         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
         Dictionary_2_System_Object_System_Object__TryInsert
                   ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar5,(Object *)value,
                    (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method_00 >> 8),2),method_00
                   ), pMVar2 == (MVWorldObjectClient *)0x0)) goto code_?;
      MVWorldObjectClient::MVWorldObjectClient_SendPackage
                (pMVar2,(Dictionary_2_System_Object_System_Object_ *)this_00,(MethodInfo *)0x0);
    }
  }
  else {
    pMVar2 = (this->fields)._._.worldObjectParent;
    if (pMVar2 == (MVWorldObjectClient *)0x0) {
code_?:
      FUN_?();
      pcVar6 = (code *)swi(3);
      bVar1 = (*pcVar6)();
      return bVar1;
    }
    fStack_11 = interaction->damage;
    fStack_12 = (interaction->impulse).x;
    fStack_13 = (interaction->impulse).y;
    fStack_14 = (interaction->impulse).z;
    uStack_15._0_1_ = interaction->interactionType;
    uStack_15._1_1_ = interaction->playerKilledByType;
    uStack_15._2_2_ = *(undefined2 *)&interaction->field_0x12;
    (*(pMVar2->klass->vtable).ReceiveInteractionPackage.methodPtr)
              (pMVar2,&fStack_11,0,(pMVar2->klass->vtable).ReceiveInteractionPackage.method);
  }
  return 1;
}


/* Boolean IsDead(InteractionData) */

bool Assembly-CSharp.dll::InteractionDataHandler::InteractionDataHandler_IsDead
               (InteractionDataHandler *this,InteractionData *interaction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVAvatarRemote);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._._.worldObjectParent;
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    bVar2 = (TypeInfo__MVAvatarRemote->_1).naturalAligment;
    if ((bVar2 <= (pMVar1->klass->_1).naturalAligment) &&
       ((MVAvatarRemote__Class *)(pMVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] ==
        TypeInfo__MVAvatarRemote)) {
      lVar3 = *(longlong *)&pMVar1[1].fields._.position.z;
      if (lVar3 != 0) {
        pOVar4 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                           (*(Object **)(lVar3 + 0x18),(MethodInfo *)0x0);
        if (pOVar4 != (Object *)0x0) {
          if ((pOVar4->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
            return ((ulonglong)pOVar4[1].klass & 2) != 0;
          }
          FUN_?(pOVar4,lRam_?);
          pcVar5 = (code *)swi(3);
          bVar6 = (*pcVar5)();
          return bVar6;
        }
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
  }
  return 0;
}


/* MVTeam get_Team() */

MVTeam__Enum
Assembly-CSharp.dll::InteractionDataHandler::InteractionDataHandler_get_Team
          (InteractionDataHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (pMVar3 = (this->fields)._._.worldObjectParent, pMVar3 != (MVWorldObjectClient *)0x0)) &&
     ((pMVar2->fields).teamManager != (MVTeamManager *)0x0)) {
    actorNr = (pMVar3->fields)._.ownerActorNr;
    if (actorNr == 0) {
      return MVTeam__Enum_Server;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar1 != (MVGameControllerBase *)0x0) &&
        (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
       (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
      pMVar4 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                         (this_00,actorNr,(MethodInfo *)0x0);
      if (pMVar4 != (MVPlayer *)0x0) {
        return (pMVar4->fields)._Team_k__BackingField;
      }
    }
    FUN_?();
    pcVar5 = (code *)swi(3);
    MVar6 = (*pcVar5)();
    return MVar6;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  MVar6 = (*pcVar5)();
  return MVar6;
}

