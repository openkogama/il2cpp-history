
/* Void Initialize(MVTeam) */

void Assembly-CSharp.dll::SpawnPointInfo::SpawnPointInfo_Initialize
               (SpawnPointInfo *this,MVTeam__Enum teamRequirement,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                   );
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  uStack_1 = uStack_1 & 0xffffff00;
  if (teamRequirement == MVTeam__Enum_None) {
code_?:
    uStack_1 = CONCAT31(uStack_1._1_3_,1);
  }
  else {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 == (MVNetworkGame *)0x0) ||
       (this_00 = (pMVar2->fields).teamManager, this_00 == (MVTeamManager *)0x0))
    goto code_?;
    pLVar3 = MVTeamManager::MVTeamManager_GetTeamList(this_00,(MethodInfo *)0x0);
    if (pLVar3 == (List_1_MV_WorldObject_MVTeam_ *)0x0) goto code_?;
    if ((pLVar3->fields)._size < 2) goto code_?;
  }
  pIVar4 = (this->fields).TeamRequirementImage;
  if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Styles);
  }
  pCVar5 = Styles::Styles_GetTeamColor(&CStack_6,teamRequirement,(bool)uStack_1,(MethodInfo *)0x0);
  if (pIVar4 != (Image *)0x0) {
    CStack_6.r = pCVar5->b;
    CStack_6.g = pCVar5->a;
    CStack_6.b = (float)(pIVar4->klass->vtable).set_color.method;
    (*(pIVar4->klass->vtable).set_color.methodPtr)(pIVar4,pCVar5->r,pCVar5->g);
    return;
  }
code_?:
  CStack_6.b = (float)&UNK_?;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

