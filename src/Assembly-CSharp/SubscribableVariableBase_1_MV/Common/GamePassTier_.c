
/* Boolean Equals(SubscribableVariableBase`1[MV.Common.GamePassTier]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[MV::Common::GamePassTier]::
     SubscribableVariableBase_1_MV_Common_GamePassTier__Equals_1
               (SubscribableVariableBase_1_MV_Common_GamePassTier_ *this,
               SubscribableVariableBase_1_MV_Common_GamePassTier_ *other,MethodInfo *method)

{
  pMVar1 = method;
  pSVar2 = &this->fields;
  if (other != (SubscribableVariableBase_1_MV_Common_GamePassTier_ *)0x0) {
    this = (SubscribableVariableBase_1_MV_Common_GamePassTier_ *)
           CONCAT13((other->fields).value,this._0_3_);
    iVar3 = *(int *)(*(int *)(method->name + 0x60) + 0x1c);
    if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
      func_?(iVar3);
    }
    other = (SubscribableVariableBase_1_MV_Common_GamePassTier_ *)
            func_?(iVar3,(int)&this + 3);
    iVar3 = *(int *)(*(int *)(pMVar1->name + 0x60) + 0x1c);
    if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
      func_?(iVar3);
    }
    piVar4 = (int *)func_?(iVar3,pSVar2);
    if (piVar4 != (int *)0x0) {
      bVar5 = (**(code **)(*piVar4 + 0xc0))(piVar4,other,*(undefined4 *)(*piVar4 + 0xc4));
      puVar6 = (uint8_t *)func_?(piVar4);
      pSVar2->value = *puVar6;
      return bVar5;
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  bVar5 = (*pcVar7)();
  return bVar5;
}


/* Boolean op_Equality(SubscribableVariableBase`1[MV.Common.GamePassTier],
   SubscribableVariableBase`1[MV.Common.GamePassTier]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[MV::Common::GamePassTier]::
     SubscribableVariableBase_1_MV_Common_GamePassTier__op_Equality
               (SubscribableVariableBase_1_MV_Common_GamePassTier_ *a,
               SubscribableVariableBase_1_MV_Common_GamePassTier_ *b,MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SubscribableVariableBase_1_MV_Common_GamePassTier_ *)0x0) {
    pSVar2 = &a->fields;
    if (b != (SubscribableVariableBase_1_MV_Common_GamePassTier_ *)0x0) {
      a = (SubscribableVariableBase_1_MV_Common_GamePassTier_ *)CONCAT13((b->fields).value,a._0_3_);
      pcVar3 = method->name;
      if ((pcVar3[0xbe] & 1U) == 0) {
        func_?(pcVar3);
      }
      iVar4 = *(int *)(*(int *)(pcVar3 + 0x60) + 0x1c);
      if ((*(byte *)(iVar4 + 0xbe) & 1) == 0) {
        func_?(iVar4);
      }
      uVar5 = func_?(iVar4,(int)&a + 3);
      pcVar3 = pMVar1->name;
      if ((pcVar3[0xbe] & 1U) == 0) {
        func_?(pcVar3);
      }
      iVar4 = *(int *)(*(int *)(pcVar3 + 0x60) + 0x1c);
      if ((*(byte *)(iVar4 + 0xbe) & 1) == 0) {
        func_?(iVar4);
      }
      piVar6 = (int *)func_?(iVar4,pSVar2);
      if (piVar6 != (int *)0x0) {
        bVar7 = (**(code **)(*piVar6 + 0xc0))(piVar6,uVar5,*(undefined4 *)(*piVar6 + 0xc4));
        puVar8 = (uint8_t *)func_?(piVar6);
        pSVar2->value = *puVar8;
        return bVar7;
      }
    }
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  bVar7 = (*pcVar9)();
  return bVar7;
}


/* Boolean op_Equality(SubscribableVariableBase`1[MV.Common.GamePassTier], GamePassTier) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[MV::Common::GamePassTier]::
     SubscribableVariableBase_1_MV_Common_GamePassTier__op_Equality_1
               (SubscribableVariableBase_1_MV_Common_GamePassTier_ *a,GamePassTier__Enum b,
               MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SubscribableVariableBase_1_MV_Common_GamePassTier_ *)0x0) {
    a = (SubscribableVariableBase_1_MV_Common_GamePassTier_ *)CONCAT13((a->fields).value,a._0_3_);
    pcVar2 = method->name;
    if ((pcVar2[0xbe] & 1U) == 0) {
      func_?(pcVar2);
    }
    iVar3 = *(int *)(*(int *)(pcVar2 + 0x60) + 0x1c);
    if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
      func_?(iVar3);
    }
    uVar4 = func_?(iVar3,(int)&a + 3);
    pcVar2 = pMVar1->name;
    if ((pcVar2[0xbe] & 1U) == 0) {
      func_?(pcVar2);
    }
    iVar3 = *(int *)(*(int *)(pcVar2 + 0x60) + 0x1c);
    if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
      func_?(iVar3);
    }
    piVar5 = (int *)func_?(iVar3,&b);
    if (piVar5 != (int *)0x0) {
      bVar6 = (**(code **)(*piVar5 + 0xc0))(piVar5,uVar4,*(undefined4 *)(*piVar5 + 0xc4));
      func_?(piVar5);
      return bVar6;
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  bVar6 = (*pcVar7)();
  return bVar6;
}


/* Boolean op_Equality(GamePassTier, SubscribableVariableBase`1[MV.Common.GamePassTier]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[MV::Common::GamePassTier]::
     SubscribableVariableBase_1_MV_Common_GamePassTier__op_Equality_2
               (GamePassTier__Enum b,SubscribableVariableBase_1_MV_Common_GamePassTier_ *a,
               MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SubscribableVariableBase_1_MV_Common_GamePassTier_ *)0x0) {
    a = (SubscribableVariableBase_1_MV_Common_GamePassTier_ *)CONCAT13((a->fields).value,a._0_3_);
    pcVar2 = method->name;
    if ((pcVar2[0xbe] & 1U) == 0) {
      func_?(pcVar2);
    }
    iVar3 = *(int *)(*(int *)(pcVar2 + 0x60) + 0x1c);
    if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
      func_?(iVar3);
    }
    uVar4 = func_?(iVar3,(int)&a + 3);
    pcVar2 = pMVar1->name;
    if ((pcVar2[0xbe] & 1U) == 0) {
      func_?(pcVar2);
    }
    iVar3 = *(int *)(*(int *)(pcVar2 + 0x60) + 0x1c);
    if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
      func_?(iVar3);
    }
    piVar5 = (int *)func_?(iVar3,&b);
    if (piVar5 != (int *)0x0) {
      bVar6 = (**(code **)(*piVar5 + 0xc0))(piVar5,uVar4,*(undefined4 *)(*piVar5 + 0xc4));
      func_?(piVar5);
      return bVar6;
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  bVar6 = (*pcVar7)();
  return bVar6;
}


/* Boolean op_Inequality(SubscribableVariableBase`1[MV.Common.GamePassTier], GamePassTier) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[MV::Common::GamePassTier]::
     SubscribableVariableBase_1_MV_Common_GamePassTier__op_Inequality_1
               (SubscribableVariableBase_1_MV_Common_GamePassTier_ *a,GamePassTier__Enum b,
               MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SubscribableVariableBase_1_MV_Common_GamePassTier_ *)0x0) {
    a = (SubscribableVariableBase_1_MV_Common_GamePassTier_ *)CONCAT13((a->fields).value,a._0_3_);
    pcVar2 = method->name;
    if ((pcVar2[0xbe] & 1U) == 0) {
      func_?(pcVar2);
    }
    iVar3 = *(int *)(*(int *)(pcVar2 + 0x60) + 0x1c);
    if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
      func_?(iVar3);
    }
    uVar4 = func_?(iVar3,(int)&a + 3);
    pcVar2 = pMVar1->name;
    if ((pcVar2[0xbe] & 1U) == 0) {
      func_?(pcVar2);
    }
    iVar3 = *(int *)(*(int *)(pcVar2 + 0x60) + 0x1c);
    if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
      func_?(iVar3);
    }
    piVar5 = (int *)func_?(iVar3,&b);
    if (piVar5 != (int *)0x0) {
      cVar6 = (**(code **)(*piVar5 + 0xc0))(piVar5,uVar4,*(undefined4 *)(*piVar5 + 0xc4));
      func_?(piVar5);
      return cVar6 == '\0';
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Boolean op_Inequality(GamePassTier, SubscribableVariableBase`1[MV.Common.GamePassTier]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[MV::Common::GamePassTier]::
     SubscribableVariableBase_1_MV_Common_GamePassTier__op_Inequality_2
               (GamePassTier__Enum b,SubscribableVariableBase_1_MV_Common_GamePassTier_ *a,
               MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SubscribableVariableBase_1_MV_Common_GamePassTier_ *)0x0) {
    a = (SubscribableVariableBase_1_MV_Common_GamePassTier_ *)CONCAT13((a->fields).value,a._0_3_);
    pcVar2 = method->name;
    if ((pcVar2[0xbe] & 1U) == 0) {
      func_?(pcVar2);
    }
    iVar3 = *(int *)(*(int *)(pcVar2 + 0x60) + 0x1c);
    if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
      func_?(iVar3);
    }
    uVar4 = func_?(iVar3,(int)&a + 3);
    pcVar2 = pMVar1->name;
    if ((pcVar2[0xbe] & 1U) == 0) {
      func_?(pcVar2);
    }
    iVar3 = *(int *)(*(int *)(pcVar2 + 0x60) + 0x1c);
    if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
      func_?(iVar3);
    }
    piVar5 = (int *)func_?(iVar3,&b);
    if (piVar5 != (int *)0x0) {
      cVar6 = (**(code **)(*piVar5 + 0xc0))(piVar5,uVar4,*(undefined4 *)(*piVar5 + 0xc4));
      func_?(piVar5);
      return cVar6 == '\0';
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}

