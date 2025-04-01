
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
  uVar8 = (uint)((ulonglong)uVar7 >> 0x20);
  pbVar9 = (byte *)((int)&pTVar1[6].fields._._.m_CachedPtr + extraout_ECX);
  bVar10 = (byte)((ulonglong)uVar7 >> 0x28);
  bVar11 = *pbVar9 + bVar10;
  bVar12 = CARRY1(*pbVar9,bVar10) || CARRY1(bVar11,bVar6);
  *pbVar9 = bVar11 + bVar6;
  pbVar9 = (byte *)((int)&pTVar1[4].klass + 1);
  bVar6 = *pbVar9;
  bVar11 = *pbVar9;
  *pbVar9 = bVar11 + unaff_BH + bVar12;
  pcVar13 = (char *)(uVar8 + 0x88105031);
  *pcVar13 = *pcVar13 + (char)((ulonglong)uVar7 >> 0x20) +
            (CARRY1(bVar6,unaff_BH) || CARRY1(bVar11 + unaff_BH,bVar12));
  puVar14 = (uint *)((int)uVar7 + 0x10);
  *puVar14 = *puVar14 ^ uVar8;
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}

