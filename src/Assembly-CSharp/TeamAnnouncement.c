
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::TeamAnnouncement::TeamAnnouncement_Initialize
               (TeamAnnouncement *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pNVar1 = (this->fields).fader;
  if (pNVar1 != (NotificationFade *)0x0) {
    this_00 = (pNVar1->fields).group;
    (pNVar1->fields).playing = 1;
    (pNVar1->fields).pauseAt = (pNVar1->fields).duration;
    if (this_00 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_00,0.0,(MethodInfo *)0x0);
      cVar2 = cRam_?;
      (pNVar1->fields).currentTime = 0.0;
      (this->fields)._.timeSinceStart = 0.0;
      if (cVar2 == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cVar2 = '\x01';
        cRam_? = '\x01';
      }
      pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar3 != (MVGameControllerBase *)0x0) &&
         (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) {
        pMVar5 = (pMVar4->fields).teamManager;
        if (cVar2 == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar3 != (MVGameControllerBase *)0x0) &&
            (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
           (this_01 = (pMVar4->fields).playerContainer, this_01 != (MVPlayerContainer *)0x0)) {
          pMVar6 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_01,(MethodInfo *)0x0);
          if ((pMVar6 != (MVLocalPlayer *)0x0) && (pMVar5 != (MVTeamManager *)0x0)) {
            key = MVTeamManager::MVTeamManager_GetTeamFromActorNr
                            (pMVar5,(pMVar6->fields)._._ActorNr_k__BackingField,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
              FUN_?();
            }
            pCVar7 = Styles::Styles_GetTeamColor(&CStack_8,key,0,(MethodInfo *)0x0);
            pTVar9 = (this->fields).teamColorText;
            if (pTVar9 != (Text *)0x0) {
              CStack_8.r = pCVar7->r;
              CStack_8.g = pCVar7->g;
              CStack_8.b = pCVar7->b;
              CStack_8.a = pCVar7->a;
              (*(pTVar9->klass->vtable).set_color.methodPtr)
                        (pTVar9,&CStack_8,(pTVar9->klass->vtable).set_color.method);
              pTVar9 = (this->fields).teamColorText;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if (((pMVar3 != (MVGameControllerBase *)0x0) &&
                  (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
                 ((pMVar5 = (pMVar4->fields).teamManager, pMVar5 != (MVTeamManager *)0x0 &&
                  (this_02 = (pMVar5->fields).teamNames,
                  this_02 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0)))) {
                pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32Enum,System::Object]::
                         Dictionary_2_System_Int32Enum_System_Object__get_Item
                                   ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,key,
                                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                   );
                if (pTVar9 != (Text *)0x0) {
                  UNRECOVERED_JUMPTABLE = (pTVar9->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*UNRECOVERED_JUMPTABLE)
                            (pTVar9,pOVar10,(pTVar9->klass->vtable).set_text.method,
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
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

