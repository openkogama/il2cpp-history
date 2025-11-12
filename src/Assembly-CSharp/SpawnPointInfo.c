
/* Void Initialize(MVTeam) */

void Assembly-CSharp.dll::SpawnPointInfo::SpawnPointInfo_Initialize
               (SpawnPointInfo *this,MVTeam__Enum teamRequirement,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  darkTeam = 0;
  if (teamRequirement == MVTeam__Enum_None) {
code_?:
    darkTeam = 1;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar1 == (MVGameControllerBase *)0x0) ||
        (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
       (this_00 = (pMVar2->fields).teamManager, this_00 == (MVTeamManager *)0x0))
    goto code_?;
    pLVar3 = MVTeamManager::MVTeamManager_GetTeamList(this_00,(MethodInfo *)0x0);
    if (pLVar3 == (List_1_MV_WorldObject_MVTeam_ *)0x0) goto code_?;
    if ((pLVar3->fields)._size < 2) goto code_?;
  }
  pIVar4 = (this->fields).TeamRequirementImage;
  if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
    FUN_?();
  }
  pCVar5 = Styles::Styles_GetTeamColor(&CStack_6,teamRequirement,darkTeam,(MethodInfo *)0x0);
  if (pIVar4 != (Image *)0x0) {
    CStack_6.r = pCVar5->r;
    CStack_6.g = pCVar5->g;
    CStack_6.b = pCVar5->b;
    CStack_6.a = pCVar5->a;
    (*(pIVar4->klass->vtable).set_color.methodPtr)
              (pIVar4,&CStack_6,(pIVar4->klass->vtable).set_color.method);
    return;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

