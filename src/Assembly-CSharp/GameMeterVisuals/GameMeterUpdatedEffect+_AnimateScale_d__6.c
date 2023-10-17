
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::GameMeterVisuals::GameMeterUpdatedEffect+<AnimateScale>d__6::
     GameMeterUpdatedEffect_AnimateScale_d_6_MoveNext
               (GameMeterUpdatedEffect_AnimateScale_d_6 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  pGVar1 = this;
  pGVar2 = (this->fields).__4__this;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    (this->fields)._i_5__2 = 0.0;
    break;
  case 1:
    (this->fields).__1__state = -1;
    this = (GameMeterUpdatedEffect_AnimateScale_d_6 *)(this->fields)._i_5__2;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (pGVar1->fields)._i_5__2 = fVar3 + (float)this;
    break;
  case 2:
    (this->fields).__1__state = -1;
    this = (GameMeterUpdatedEffect_AnimateScale_d_6 *)(this->fields)._i_5__2;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (pGVar1->fields)._i_5__2 = fVar3 + (float)this;
    cVar4 = (int)pGVar2 < 0;
    bVar5 = true;
    if (pGVar2 == (GameMeterUpdatedEffect *)0x0) goto code_?;
    goto code_?;
  case 3:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
  cVar4 = (int)pGVar2 < 0;
  bVar5 = pGVar2 == (GameMeterUpdatedEffect *)0x0;
  if (!bVar5) {
    fVar3 = (pGVar2->fields).scaleTime;
    pfVar6 = &(pGVar1->fields)._i_5__2;
    pRVar7 = (pGVar2->fields).scaleTarget;
    if (fVar3 < *pfVar6 || fVar3 == *pfVar6) {
      cVar4 = (int)pRVar7 < 0;
      bVar5 = pRVar7 == (RectTransform *)0x0;
      if (!bVar5) {
        unaff_EBX = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pRVar7,(MethodInfo *)0x0);
        uStack_8._0_4_ = (pGVar2->fields).startSize.x;
        uStack_8._4_4_ = (pGVar2->fields).startSize.y;
        fStack_9 = (pGVar2->fields).startSize.z;
        puVar10 = (undefined8 *)func_?(&VStack_11,0);
        fVar3 = (pGVar2->fields).scaleStrength;
        uStack_12._0_4_ = (float)*puVar10;
        uStack_12._4_4_ = (float)((ulonglong)*puVar10 >> 0x20);
        fVar13 = (float)uStack_8 + (float)uStack_12 * fVar3;
        fVar14 = uStack_8._4_4_ + uStack_12._4_4_ * fVar3;
        uStack_12 = CONCAT44(fVar14,fVar13);
        fStack_15 = fStack_9 + *(float *)(puVar10 + 1) * fVar3;
        cVar4 = (int)unaff_EBX < 0;
        bVar5 = unaff_EBX == (Transform *)0x0;
        if (!bVar5) {
          value_00.y = fVar14;
          value_00.x = fVar13;
          value_00.z = fStack_15;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                    (unaff_EBX,value_00,(MethodInfo *)0x0);
          (pGVar1->fields)._i_5__2 = 0.0;
code_?:
          fVar3 = (pGVar2->fields).scaleTime;
          pfVar6 = &(pGVar1->fields)._i_5__2;
          pRVar7 = (pGVar2->fields).scaleTarget;
          if (fVar3 < *pfVar6 || fVar3 == *pfVar6) {
            cVar4 = (int)pRVar7 < 0;
            bVar5 = pRVar7 == (RectTransform *)0x0;
            if (!bVar5) {
              pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pRVar7,(MethodInfo *)0x0);
              cVar4 = (int)pTVar16 < 0;
              bVar5 = pTVar16 == (Transform *)0x0;
              if (!bVar5) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                          (pTVar16,(pGVar2->fields).startSize,(MethodInfo *)0x0);
                this = (GameMeterUpdatedEffect_AnimateScale_d_6 *)0x0;
                pOVar17 = (Object *)func_?(TypeInfo__System__Int32,&this);
                (pGVar1->fields).__2__current = pOVar17;
                func_?(&(pGVar1->fields).__2__current,pOVar17);
                (pGVar1->fields).__1__state = 3;
                return 1;
              }
            }
          }
          else {
            cVar4 = (int)pRVar7 < 0;
            bVar5 = pRVar7 == (RectTransform *)0x0;
            if (!bVar5) {
              pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pRVar7,(MethodInfo *)0x0);
              cVar4 = (int)pTVar16 < 0;
              bVar5 = pTVar16 == (Transform *)0x0;
              if (!bVar5) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                          (&VStack_11,pTVar16,(MethodInfo *)0x0);
                this = (GameMeterUpdatedEffect_AnimateScale_d_6 *)0x0;
                pOVar17 = (Object *)func_?(TypeInfo__System__Int32,&this);
                (pGVar1->fields).__2__current = pOVar17;
                func_?(&(pGVar1->fields).__2__current,pOVar17);
                (pGVar1->fields).__1__state = 2;
                return 1;
              }
            }
          }
        }
      }
    }
    else {
      cVar4 = (int)pRVar7 < 0;
      bVar5 = pRVar7 == (RectTransform *)0x0;
      if (!bVar5) {
        pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pRVar7,(MethodInfo *)0x0);
        uStack_12._0_4_ = (pGVar2->fields).startSize.x;
        uStack_12._4_4_ = (pGVar2->fields).startSize.y;
        fStack_15 = (pGVar2->fields).startSize.z;
        puVar10 = (undefined8 *)func_?(&VStack_11,0);
        uStack_8._0_4_ = (float)*puVar10;
        fVar3 = ((pGVar1->fields)._i_5__2 / (pGVar2->fields).scaleTime) *
                 (pGVar2->fields).scaleStrength;
        uStack_8._4_4_ = (float)((ulonglong)*puVar10 >> 0x20);
        fVar13 = (float)uStack_12 + (float)uStack_8 * fVar3;
        fVar14 = uStack_12._4_4_ + uStack_8._4_4_ * fVar3;
        uStack_8 = CONCAT44(fVar14,fVar13);
        fStack_9 = fStack_15 + *(float *)(puVar10 + 1) * fVar3;
        cVar4 = (int)pTVar16 < 0;
        bVar5 = pTVar16 == (Transform *)0x0;
        unaff_EBX = (Transform *)0x0;
        if (!bVar5) {
          value.y = fVar14;
          value.x = fVar13;
          value.z = fStack_9;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                    (pTVar16,value,(MethodInfo *)0x0);
          this = (GameMeterUpdatedEffect_AnimateScale_d_6 *)0x0;
          pOVar17 = (Object *)func_?(TypeInfo__System__Int32,&this);
          (pGVar1->fields).__2__current = pOVar17;
          func_?(&(pGVar1->fields).__2__current,pOVar17);
          (pGVar1->fields).__1__state = 1;
          return 1;
        }
      }
    }
  }
code_?:
  cVar18 = '\0';
  bVar19 = 0;
  uVar20 = func_?();
  if (bVar5 || cVar18 != cVar4) {
    pbVar21 = unaff_ESI + 0x7f;
    bVar22 = (byte)((ushort)extraout_CX >> 8);
    bVar23 = *pbVar21 + bVar22;
    bVar5 = CARRY1(*pbVar21,bVar22) || CARRY1(bVar23,bVar19);
    *pbVar21 = bVar23 + bVar19;
    bVar23 = (char)((ulonglong)uVar20 >> 0x20) + 1;
    pbVar21 = (byte *)((int)uVar20 + -0x7f);
    bVar19 = *pbVar21 + bVar23;
    bVar24 = CARRY1(*pbVar21,bVar23) || CARRY1(bVar19,bVar5);
    *pbVar21 = bVar19 + bVar5;
    pbVar21 = (byte *)((int)&unaff_EBX[-0xb].monitor + 2);
    bVar19 = *pbVar21;
    bVar23 = *pbVar21 + (byte)extraout_CX;
    *pbVar21 = bVar23 + bVar24;
    iVar25 = (int)((ulonglong)uVar20 >> 0x20) + 3;
    *(char *)&pGVar1[4].fields.__1__state =
         (char)pGVar1[4].fields.__1__state + (char)iVar25 +
         (CARRY1(bVar19,(byte)extraout_CX) || CARRY1(bVar23,bVar24));
    uVar26 = (undefined2)iVar25;
    uVar27 = in(uVar26);
    *unaff_ESI = uVar27;
    out(uVar26,(char)uVar20);
    this_00 = (NotSupportedException *)func_?();
    func_?(this_00);
    mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
              (this_00,(MethodInfo *)0x0);
    VStack_11.z = (float)func_?(&
                                         MethodInfo__GameMeterVisuals__GameMeterUpdatedEffect___AnimateScale_d__6__System_Collections_IEnumerator_Reset__
                                        );
    VStack_11.x = (float)&UNK_?;
    VStack_11.y = (float)this_00;
    func_?();
  }
  pcVar28 = (code *)swi(3);
  bVar29 = (*pcVar28)();
  return bVar29;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::GameMeterVisuals::GameMeterUpdatedEffect+<AnimateScale>d__6::
     GameMeterUpdatedEffect_AnimateScale_d_6_System_Collections_IEnumerator_Reset
               (GameMeterUpdatedEffect_AnimateScale_d_6 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__GameMeterVisuals__GameMeterUpdatedEffect___AnimateScale_d__6__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

