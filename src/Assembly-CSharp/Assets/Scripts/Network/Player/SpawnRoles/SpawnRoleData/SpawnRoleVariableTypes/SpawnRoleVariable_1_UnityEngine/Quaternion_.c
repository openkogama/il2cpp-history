
/* Boolean Equals(SpawnRoleVariable`1[UnityEngine.Quaternion]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Quaternion]::
     SpawnRoleVariable_1_UnityEngine_Quaternion__Equals_1
               (SpawnRoleVariable_1_UnityEngine_Quaternion_ *this,
               SpawnRoleVariable_1_UnityEngine_Quaternion_ *other,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  pSVar5 = (this->fields).subscribableVariable;
  if (pSVar5 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0) {
    puVar6 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x30);
    puVar6 = (undefined4 *)(*(code *)*puVar6)(auStack_7,pSVar5,puVar6);
    uStack_1 = *puVar6;
    uStack_2 = puVar6[1];
    uStack_3 = puVar6[2];
    uStack_4 = puVar6[3];
    if ((other != (SpawnRoleVariable_1_UnityEngine_Quaternion_ *)0x0) &&
       (pSVar5 = (other->fields).subscribableVariable,
       pSVar5 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0)) {
      puVar6 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x30);
      puVar6 = (undefined4 *)(*(code *)*puVar6)(auStack_7,pSVar5,puVar6);
      uStack_8 = *puVar6;
      uStack_9 = puVar6[1];
      uStack_10 = puVar6[2];
      uStack_11 = puVar6[3];
      iVar12 = *(int *)(*(int *)(method->name + 0x60) + 0x38);
      if ((*(byte *)(iVar12 + 0xbe) & 1) == 0) {
        func_?(iVar12);
      }
      uVar13 = func_?(iVar12,&uStack_8);
      bVar14 = func_?(&uStack_1,uVar13,0);
      return bVar14;
    }
  }
  func_?(0);
  pcVar15 = (code *)swi(3);
  bVar14 = (*pcVar15)();
  return bVar14;
}


/* Void SubscribableVariableOnOnChange(Quaternion) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Quaternion]::
     SpawnRoleVariable_1_UnityEngine_Quaternion__SubscribableVariableOnOnChange
               (SpawnRoleVariable_1_UnityEngine_Quaternion_ *this,Quaternion value,
               MethodInfo *method)

{
  pSVar1 = (this->fields).OnChange;
  if (pSVar1 != (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Quaternion_ *)0x0) {
    puVar2 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x34);
    (*(code *)*puVar2)(pSVar1,value.x,value.y,value.z,value.w,puVar2);
  }
  return;
}


/* SpawnRoleVariable`1[UnityEngine.Quaternion](Quaternion) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Quaternion]::
     SpawnRoleVariable_1_UnityEngine_Quaternion___ctor
               (SpawnRoleVariable_1_UnityEngine_Quaternion_ *this,Quaternion value,
               MethodInfo *method)

{
  if (this != (SpawnRoleVariable_1_UnityEngine_Quaternion_ *)0x0) {
    ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
    iVar1 = **(int **)(method->name + 0x60);
    if ((*(byte *)(iVar1 + 0xbe) & 1) == 0) {
      func_?(iVar1);
    }
    pSVar2 = (SubscribableVariable_1_UnityEngine_Quaternion_ *)func_?(iVar1);
    puVar3 = *(undefined4 **)(*(int *)(method->name + 0x60) + 4);
    (*(code *)*puVar3)(pSVar2,value.x,value.y,value.z,value.w,puVar3);
    (this->fields).subscribableVariable = pSVar2;
    iVar1 = *(int *)(*(int *)(method->name + 0x60) + 0xc);
    if ((*(byte *)(iVar1 + 0xbe) & 1) == 0) {
      func_?(iVar1);
    }
    uVar4 = func_?(iVar1);
    puVar3 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x10);
    (*(code *)*puVar3)(uVar4,this,*(undefined4 *)(*(int *)(method->name + 0x60) + 8),puVar3);
    if (pSVar2 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0) {
      puVar3 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x14);
      (*(code *)*puVar3)(pSVar2,uVar4,puVar3);
      return;
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Quaternion get_Value() */

Quaternion *
Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Quaternion]::
SpawnRoleVariable_1_UnityEngine_Quaternion__get_Value
          (Quaternion *__return_storage_ptr__,SpawnRoleVariable_1_UnityEngine_Quaternion_ *this,
          MethodInfo *method)

{
  pSVar1 = (this->fields).subscribableVariable;
  if (pSVar1 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0) {
    puVar2 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x30);
    pfVar3 = (float *)(*(code *)*puVar2)(auStack_4,pSVar1,puVar2);
    fVar5 = pfVar3[1];
    fVar6 = pfVar3[2];
    fVar7 = pfVar3[3];
    __return_storage_ptr__->x = *pfVar3;
    __return_storage_ptr__->y = fVar5;
    __return_storage_ptr__->z = fVar6;
    __return_storage_ptr__->w = fVar7;
    return __return_storage_ptr__;
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  pQVar9 = (Quaternion *)(*pcVar8)();
  return pQVar9;
}


/* Boolean op_Equality(SpawnRoleVariable`1[UnityEngine.Quaternion],
   SpawnRoleVariable`1[UnityEngine.Quaternion]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Quaternion]::
     SpawnRoleVariable_1_UnityEngine_Quaternion__op_Equality
               (SpawnRoleVariable_1_UnityEngine_Quaternion_ *a,
               SpawnRoleVariable_1_UnityEngine_Quaternion_ *b,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  if ((a != (SpawnRoleVariable_1_UnityEngine_Quaternion_ *)0x0) &&
     (pSVar5 = (a->fields).subscribableVariable,
     pSVar5 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0)) {
    pcVar6 = method->name;
    pcVar7 = pcVar6;
    if ((pcVar6[0xbe] & 1U) == 0) {
      func_?(pcVar6);
      pcVar7 = method->name;
    }
    if ((pcVar7[0xbe] & 1U) == 0) {
      func_?(pcVar7);
    }
    puVar8 = (undefined4 *)
             (*(code *)**(undefined4 **)(*(int *)(pcVar7 + 0x60) + 0x30))
                       (auStack_9,pSVar5,*(undefined4 *)(*(int *)(pcVar6 + 0x60) + 0x30));
    uStack_1 = *puVar8;
    uStack_2 = puVar8[1];
    uStack_3 = puVar8[2];
    uStack_4 = puVar8[3];
    if ((b != (SpawnRoleVariable_1_UnityEngine_Quaternion_ *)0x0) &&
       (pSVar5 = (b->fields).subscribableVariable,
       pSVar5 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0)) {
      pcVar6 = method->name;
      pcVar7 = pcVar6;
      if ((pcVar6[0xbe] & 1U) == 0) {
        func_?(pcVar6);
        pcVar7 = method->name;
      }
      if ((pcVar7[0xbe] & 1U) == 0) {
        func_?(pcVar7);
      }
      puVar8 = (undefined4 *)
               (*(code *)**(undefined4 **)(*(int *)(pcVar7 + 0x60) + 0x30))
                         (auStack_9,pSVar5,*(undefined4 *)(*(int *)(pcVar6 + 0x60) + 0x30));
      pcVar6 = method->name;
      uStack_10 = *puVar8;
      uStack_11 = puVar8[1];
      uStack_12 = puVar8[2];
      uStack_13 = puVar8[3];
      if ((pcVar6[0xbe] & 1U) == 0) {
        func_?(pcVar6);
      }
      iVar14 = *(int *)(*(int *)(pcVar6 + 0x60) + 0x38);
      if ((*(byte *)(iVar14 + 0xbe) & 1) == 0) {
        func_?(iVar14);
      }
      uVar15 = func_?(iVar14,&uStack_10);
      bVar16 = func_?(&uStack_1,uVar15,0);
      return bVar16;
    }
  }
  func_?(0);
  pcVar17 = (code *)swi(3);
  bVar16 = (*pcVar17)();
  return bVar16;
}


/* Boolean op_Equality(SpawnRoleVariable`1[UnityEngine.Quaternion], Quaternion) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Quaternion]::
     SpawnRoleVariable_1_UnityEngine_Quaternion__op_Equality_1
               (SpawnRoleVariable_1_UnityEngine_Quaternion_ *a,Quaternion b,MethodInfo *method)

{
  if ((a != (SpawnRoleVariable_1_UnityEngine_Quaternion_ *)0x0) &&
     (pSVar1 = (a->fields).subscribableVariable,
     pSVar1 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0)) {
    pcVar2 = method->name;
    pcVar3 = pcVar2;
    if ((pcVar2[0xbe] & 1U) == 0) {
      func_?(pcVar2);
      pcVar3 = method->name;
    }
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    puVar4 = (undefined4 *)
             (*(code *)**(undefined4 **)(*(int *)(pcVar3 + 0x60) + 0x30))
                       (auStack_5,pSVar1,*(undefined4 *)(*(int *)(pcVar2 + 0x60) + 0x30));
    pcVar2 = method->name;
    uStack_6 = *puVar4;
    uStack_7 = puVar4[1];
    uStack_8 = puVar4[2];
    uStack_9 = puVar4[3];
    if ((pcVar2[0xbe] & 1U) == 0) {
      func_?(pcVar2);
    }
    iVar10 = *(int *)(*(int *)(pcVar2 + 0x60) + 0x38);
    if ((*(byte *)(iVar10 + 0xbe) & 1) == 0) {
      func_?(iVar10);
    }
    uVar11 = func_?(iVar10,&uStack_6);
    bVar12 = func_?(&b,uVar11,0);
    return bVar12;
  }
  func_?(0);
  pcVar13 = (code *)swi(3);
  bVar12 = (*pcVar13)();
  return bVar12;
}


/* Boolean op_Equality(Quaternion, SpawnRoleVariable`1[UnityEngine.Quaternion]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Quaternion]::
     SpawnRoleVariable_1_UnityEngine_Quaternion__op_Equality_2
               (Quaternion b,SpawnRoleVariable_1_UnityEngine_Quaternion_ *a,MethodInfo *method)

{
  if ((a != (SpawnRoleVariable_1_UnityEngine_Quaternion_ *)0x0) &&
     (pSVar1 = (a->fields).subscribableVariable,
     pSVar1 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0)) {
    pcVar2 = method->name;
    pcVar3 = pcVar2;
    if ((pcVar2[0xbe] & 1U) == 0) {
      func_?(pcVar2);
      pcVar3 = method->name;
    }
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    puVar4 = (undefined4 *)
             (*(code *)**(undefined4 **)(*(int *)(pcVar3 + 0x60) + 0x30))
                       (auStack_5,pSVar1,*(undefined4 *)(*(int *)(pcVar2 + 0x60) + 0x30));
    pcVar2 = method->name;
    uStack_6 = *puVar4;
    uStack_7 = puVar4[1];
    uStack_8 = puVar4[2];
    uStack_9 = puVar4[3];
    if ((pcVar2[0xbe] & 1U) == 0) {
      func_?(pcVar2);
    }
    iVar10 = *(int *)(*(int *)(pcVar2 + 0x60) + 0x38);
    if ((*(byte *)(iVar10 + 0xbe) & 1) == 0) {
      func_?(iVar10);
    }
    uVar11 = func_?(iVar10,&uStack_6);
    bVar12 = func_?(&b,uVar11,0);
    return bVar12;
  }
  func_?(0);
  pcVar13 = (code *)swi(3);
  bVar12 = (*pcVar13)();
  return bVar12;
}


/* Quaternion op_Implicit(SpawnRoleVariable`1[UnityEngine.Quaternion]) */

Quaternion *
Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Quaternion]::
SpawnRoleVariable_1_UnityEngine_Quaternion__op_Implicit
          (Quaternion *__return_storage_ptr__,SpawnRoleVariable_1_UnityEngine_Quaternion_ *s,
          MethodInfo *method)

{
  if ((s != (SpawnRoleVariable_1_UnityEngine_Quaternion_ *)0x0) &&
     (pSVar1 = (s->fields).subscribableVariable,
     pSVar1 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0)) {
    pcVar2 = method->name;
    pcVar3 = pcVar2;
    if ((pcVar2[0xbe] & 1U) == 0) {
      func_?(pcVar2);
      pcVar3 = method->name;
    }
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    pfVar4 = (float *)(*(code *)**(undefined4 **)(*(int *)(pcVar3 + 0x60) + 0x30))
                                (auStack_5,pSVar1,*(undefined4 *)(*(int *)(pcVar2 + 0x60) + 0x30));
    fVar6 = pfVar4[1];
    fVar7 = pfVar4[2];
    fVar8 = pfVar4[3];
    __return_storage_ptr__->x = *pfVar4;
    __return_storage_ptr__->y = fVar6;
    __return_storage_ptr__->z = fVar7;
    __return_storage_ptr__->w = fVar8;
    return __return_storage_ptr__;
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  pQVar10 = (Quaternion *)(*pcVar9)();
  return pQVar10;
}


/* Boolean op_Inequality(SpawnRoleVariable`1[UnityEngine.Quaternion], Quaternion) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Quaternion]::
     SpawnRoleVariable_1_UnityEngine_Quaternion__op_Inequality_1
               (SpawnRoleVariable_1_UnityEngine_Quaternion_ *a,Quaternion b,MethodInfo *method)

{
  if ((a != (SpawnRoleVariable_1_UnityEngine_Quaternion_ *)0x0) &&
     (pSVar1 = (a->fields).subscribableVariable,
     pSVar1 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0)) {
    pcVar2 = method->name;
    pcVar3 = pcVar2;
    if ((pcVar2[0xbe] & 1U) == 0) {
      func_?(pcVar2);
      pcVar3 = method->name;
    }
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    puVar4 = (undefined4 *)
             (*(code *)**(undefined4 **)(*(int *)(pcVar3 + 0x60) + 0x30))
                       (auStack_5,pSVar1,*(undefined4 *)(*(int *)(pcVar2 + 0x60) + 0x30));
    pcVar2 = method->name;
    uStack_6 = *puVar4;
    uStack_7 = puVar4[1];
    uStack_8 = puVar4[2];
    uStack_9 = puVar4[3];
    if ((pcVar2[0xbe] & 1U) == 0) {
      func_?(pcVar2);
    }
    iVar10 = *(int *)(*(int *)(pcVar2 + 0x60) + 0x38);
    if ((*(byte *)(iVar10 + 0xbe) & 1) == 0) {
      func_?(iVar10);
    }
    uVar11 = func_?(iVar10,&uStack_6);
    cVar12 = func_?(&b,uVar11,0);
    return cVar12 == '\0';
  }
  func_?(0);
  pcVar13 = (code *)swi(3);
  bVar14 = (*pcVar13)();
  return bVar14;
}


/* Boolean op_Inequality(Quaternion, SpawnRoleVariable`1[UnityEngine.Quaternion]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Quaternion]::
     SpawnRoleVariable_1_UnityEngine_Quaternion__op_Inequality_2
               (Quaternion b,SpawnRoleVariable_1_UnityEngine_Quaternion_ *a,MethodInfo *method)

{
  if ((a != (SpawnRoleVariable_1_UnityEngine_Quaternion_ *)0x0) &&
     (pSVar1 = (a->fields).subscribableVariable,
     pSVar1 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0)) {
    pcVar2 = method->name;
    pcVar3 = pcVar2;
    if ((pcVar2[0xbe] & 1U) == 0) {
      func_?(pcVar2);
      pcVar3 = method->name;
    }
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    puVar4 = (undefined4 *)
             (*(code *)**(undefined4 **)(*(int *)(pcVar3 + 0x60) + 0x30))
                       (auStack_5,pSVar1,*(undefined4 *)(*(int *)(pcVar2 + 0x60) + 0x30));
    pcVar2 = method->name;
    uStack_6 = *puVar4;
    uStack_7 = puVar4[1];
    uStack_8 = puVar4[2];
    uStack_9 = puVar4[3];
    if ((pcVar2[0xbe] & 1U) == 0) {
      func_?(pcVar2);
    }
    iVar10 = *(int *)(*(int *)(pcVar2 + 0x60) + 0x38);
    if ((*(byte *)(iVar10 + 0xbe) & 1) == 0) {
      func_?(iVar10);
    }
    uVar11 = func_?(iVar10,&uStack_6);
    cVar12 = func_?(&b,uVar11,0);
    return cVar12 == '\0';
  }
  func_?(0);
  pcVar13 = (code *)swi(3);
  bVar14 = (*pcVar13)();
  return bVar14;
}

