
/* Void Initialize(MVTeam) */

void Assembly-CSharp.dll::SpawnPointInfo::SpawnPointInfo_Initialize
               (SpawnPointInfo *this,MVTeam__Enum teamRequirement,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bStack_1 = 0;
  if (teamRequirement == MVTeam__Enum_None) {
code_?:
    bStack_1 = 1;
  }
  else {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 == (MVNetworkGame *)0x0) goto code_?;
    this_01 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                        ((DayNightCycle *)this_00,(MethodInfo *)0x0);
    if (this_01 == (SkyParam *)0x0) goto code_?;
    this_02 = MVTeamManager::MVTeamManager_GetTeamList((MVTeamManager *)this_01,(MethodInfo *)0x0);
    if (this_02 == (List_1_MV_WorldObject_MVTeam_ *)0x0) goto code_?;
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_02,
                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                       );
    if ((int)pOVar2 < 2) goto code_?;
  }
  pIVar3 = (this->fields).TeamRequirementImage;
  if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Styles->_1).cctor_started == 0)) {
    func_?(TypeInfo__Styles);
  }
  pCVar4 = Styles::Styles_GetTeamColor
                     ((Color *)&stack0xffffffe8,teamRequirement,bStack_1,(MethodInfo *)0x0);
  if (pIVar3 != (Image *)0x0) {
    (*(code *)(pIVar3->klass->vtable).set_color.method)(pIVar3,pCVar4->r,pCVar4->g);
    return;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

