
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::TeamAnnouncement::TeamAnnouncement_Initialize
               (TeamAnnouncement *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).fader;
  if (this_00 != (NotificationFade *)0x0) {
    NotificationFade::NotificationFade_Activate(this_00,(MethodInfo *)0x0);
    Notification::Notification_Initialize((Notification *)this,data,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      CStack_1.r = (float)TypeInfo__MVGameControllerBase;
      func_?();
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 != (MVNetworkGame *)0x0) {
      pSVar3 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                         ((DayNightCycle *)pMVar2,(MethodInfo *)0x0);
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar2 != (MVNetworkGame *)0x0) {
        this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
        if (this_01 != (MVLocalPlayer *)0x0) {
          actorNumber = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                        NamedThemeAttribute_1_UnityEngine_Color__get_Name
                                  ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_01,
                                   (MethodInfo *)0x0);
          if (pSVar3 != (SkyParam *)0x0) {
            team = MVTeamManager::MVTeamManager_GetTeamFromActorNr
                             ((MVTeamManager *)pSVar3,(int32_t)actorNumber,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__Styles->_1).cctor_started == 0)) {
              func_?(TypeInfo__Styles);
            }
            pCVar4 = Styles::Styles_GetTeamColor(&CStack_1,team,0,(MethodInfo *)0x0);
            pTVar5 = (this->fields).teamColorText;
            if (pTVar5 != (Text *)0x0) {
              (*(code *)(pTVar5->klass->vtable).set_color.method)
                        (pTVar5,pCVar4->r,pCVar4->g,pCVar4->b,pCVar4->a,
                         (pTVar5->klass->vtable).get_raycastTarget.methodPtr);
              pTVar5 = (this->fields).teamColorText;
              pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar2 != (MVNetworkGame *)0x0) {
                pSVar3 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                                   ((DayNightCycle *)pMVar2,(MethodInfo *)0x0);
                if (pSVar3 != (SkyParam *)0x0) {
                  this_02 = (Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)
                            mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft
                            ::Json::Serialization::JsonProperty]::
                            Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                      ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                       pSVar3,(MethodInfo *)0x0);
                  if (this_02 != (Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)0x0) {
                    pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::
                             WorldObject::MVTeam,System::Object]::
                             Dictionary_2_MV_WorldObject_MVTeam_System_Object__get_Item
                                       (this_02,team,
                                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                       );
                    if (pTVar5 != (Text *)0x0) {
                      (*(code *)(pTVar5->klass->vtable).set_text.method)
                                (pTVar5,pOVar6,
                                 (pTVar5->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
                      ;
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
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* NotificationLifetime get_Lifetime() */

NotificationLifetime__Enum
Assembly-CSharp.dll::TeamAnnouncement::TeamAnnouncement_get_Lifetime
          (TeamAnnouncement *this,MethodInfo *method)

{
  return NotificationLifetime__Enum_High;
}

