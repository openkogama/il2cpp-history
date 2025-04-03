
/* Void Awake() */

void Assembly-CSharp.dll::Assets::UGUI::Shared::Scripts::PlanetOwnershipUIText::
     PlanetOwnershipUIText_Awake(PlanetOwnershipUIText *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__RectTransform);
    func_?(&StringLiteral_Editor);
    func_?(&StringLiteral_Play_Tester);
    func_?(&StringLiteral_Owner);
    func_?(&StringLiteral_Spectator);
    func_?(&StringLiteral_error);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  pTVar1 = unaff_ESI;
  if ((this_00 != (MVNetworkGame *)0x0) &&
     (this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0),
     this_01 != (MVLocalPlayer *)0x0)) {
    PVar2 = MVLocalPlayer::MVLocalPlayer_get_PlanetOwnership(this_01,(MethodInfo *)0x0);
    pMVar3 = unaff_ESI[1].monitor;
    switch(PVar2 & 0xff) {
    case PlanetOwnershipType__Enum_Editor:
      key = StringLiteral_Editor;
      break;
    case PlanetOwnershipType__Enum_Owner:
      key = StringLiteral_Owner;
      break;
    case PlanetOwnershipType__Enum_Playtester:
      key = StringLiteral_Play_Tester;
      break;
    default:
      key = StringLiteral_error;
      break;
    case PlanetOwnershipType__Enum_Spectator:
      key = StringLiteral_Spectator;
    }
    TM::TM__(key,(MethodInfo *)0x0);
    pTVar1 = (Transform *)0x0;
    if (pMVar3 != (MonitorData *)0x0) {
      (**(code **)(*(int *)pMVar3 + 0x318))();
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)unaff_ESI,(MethodInfo *)0x0);
      if (((unaff_ESI[1].monitor != (MonitorData *)0x0) &&
          (iVar4 = (**(code **)(*(int *)unaff_ESI[1].monitor + 0x310))(), iVar4 != 0)) &&
         (pTVar1 != (Transform *)0x0)) {
        pTVar5 = (Transform *)0x0;
        if (pTVar1->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
          pTVar5 = pTVar1;
        }
        bVar6 = 0;
        if (pTVar5 != (Transform *)0x0) {
          pTVar5 = (Transform *)0x0;
          if (pTVar1->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
            pTVar5 = pTVar1;
          }
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
          RectTransform_SetSizeWithCurrentAnchors
                    ((RectTransform *)pTVar5,RectTransform_Axis__Enum_Horizontal,
                     (float)*(int *)(iVar4 + 8) * _UNK_?,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
    }
  }
  bVar6 = 0;
  func_?();
code_?:
  uVar7 = func_?();
  pbVar8 = (byte *)((int)pTVar1 * 2 + 0x50);
  bVar9 = (byte)((ulonglong)uVar7 >> 0x28);
  bVar10 = *pbVar8 + bVar9;
  bVar11 = CARRY1(*pbVar8,bVar9) || CARRY1(bVar10,bVar6);
  *pbVar8 = bVar10 + bVar6;
  pbVar8 = (byte *)((int)&pTVar1[4].monitor + 2);
  bVar6 = *pbVar8;
  bVar10 = *pbVar8;
  *pbVar8 = bVar10 + unaff_BH + bVar11;
  pcVar12 = (char *)((int)((ulonglong)uVar7 >> 0x20) + -0x77efafca);
  *pcVar12 = *pcVar12 + (char)((ulonglong)uVar7 >> 0x20) +
            (CARRY1(bVar6,unaff_BH) || CARRY1(bVar10 + unaff_BH,bVar11));
  pcVar13 = (code *)swi(3);
  (*pcVar13)((int)uVar7);
  return;
}

