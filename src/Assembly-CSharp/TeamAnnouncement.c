
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::TeamAnnouncement::TeamAnnouncement_Initialize
               (TeamAnnouncement *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                   );
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).fader;
  if (this_00 != (NotificationFade *)0x0) {
    NotificationFade::NotificationFade_Activate(this_00,(MethodInfo *)0x0);
    Notification::Notification_Initialize((Notification *)this,data,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pMVar2 = (pMVar1->fields).teamManager;
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar1 != (MVNetworkGame *)0x0) {
        pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
        if ((pMVar3 != (MVLocalPlayer *)0x0) && (pMVar2 != (MVTeamManager *)0x0)) {
          key = MVTeamManager::MVTeamManager_GetTeamFromActorNr
                          (pMVar2,(pMVar3->fields)._._ActorNr_k__BackingField,(MethodInfo *)0x0);
          if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pCVar4 = Styles::Styles_GetTeamColor((Color *)&stack0xffffffec,key,0,(MethodInfo *)0x0);
          pTVar5 = (this->fields).teamColorText;
          if (pTVar5 != (Text *)0x0) {
            (*(code *)(pTVar5->klass->vtable).set_color.method)
                      (pTVar5,pCVar4->r,pCVar4->g,pCVar4->b,pCVar4->a,
                       (pTVar5->klass->vtable).get_raycastTarget.methodPtr);
            pTVar5 = (this->fields).teamColorText;
            pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (((pMVar1 != (MVNetworkGame *)0x0) &&
                (pMVar2 = (pMVar1->fields).teamManager, pMVar2 != (MVTeamManager *)0x0)) &&
               (this_01 = (pMVar2->fields).teamNames,
               this_01 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0)) {
              pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32Enum,System::Object]::
                       Dictionary_2_System_Int32Enum_System_Object__get_Item
                                 ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,key,
                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                 );
              if (pTVar5 != (Text *)0x0) {
                (*(code *)(pTVar5->klass->vtable).set_text.method)
                          (pTVar5,pOVar6,
                           (pTVar5->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

