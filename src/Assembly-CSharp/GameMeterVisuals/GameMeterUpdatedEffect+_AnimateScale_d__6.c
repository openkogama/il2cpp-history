
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
    if (pGVar2 == (GameMeterUpdatedEffect *)0x0) goto code_?;
    goto code_?;
  case 3:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
  if (pGVar2 != (GameMeterUpdatedEffect *)0x0) {
    fVar3 = (pGVar2->fields).scaleTime;
    pfVar4 = &(pGVar1->fields)._i_5__2;
    pRVar5 = (pGVar2->fields).scaleTarget;
    if (fVar3 < *pfVar4 || fVar3 == *pfVar4) {
      if (pRVar5 != (RectTransform *)0x0) {
        unaff_EBX = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pRVar5,(MethodInfo *)0x0);
        uStack_6._0_4_ = (pGVar2->fields).startSize.x;
        uStack_6._4_4_ = (pGVar2->fields).startSize.y;
        fStack_7 = (pGVar2->fields).startSize.z;
        puVar8 = (undefined8 *)func_?(&VStack_9,0);
        fVar3 = (pGVar2->fields).scaleStrength;
        uStack_10._0_4_ = (float)*puVar8;
        uStack_10._4_4_ = (float)((ulonglong)*puVar8 >> 0x20);
        fVar11 = (float)uStack_6 + (float)uStack_10 * fVar3;
        fStack_12 = fStack_7 + *(float *)(puVar8 + 1) * fVar3;
        fVar3 = uStack_6._4_4_ + uStack_10._4_4_ * fVar3;
        uStack_10 = CONCAT44(fVar3,fVar11);
        if (unaff_EBX != (Transform *)0x0) {
          value_00.y = fVar3;
          value_00.x = fVar11;
          value_00.z = fStack_12;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                    (unaff_EBX,value_00,(MethodInfo *)0x0);
          (pGVar1->fields)._i_5__2 = 0.0;
code_?:
          fVar3 = (pGVar2->fields).scaleTime;
          pfVar4 = &(pGVar1->fields)._i_5__2;
          pRVar5 = (pGVar2->fields).scaleTarget;
          if (fVar3 < *pfVar4 || fVar3 == *pfVar4) {
            if ((pRVar5 != (RectTransform *)0x0) &&
               (pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pRVar5,(MethodInfo *)0x0),
               pTVar13 != (Transform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                        (pTVar13,(pGVar2->fields).startSize,(MethodInfo *)0x0);
              this = (GameMeterUpdatedEffect_AnimateScale_d_6 *)0x0;
              pOVar14 = (Object *)func_?(TypeInfo__System__Int32,&this);
              (pGVar1->fields).__2__current = pOVar14;
              func_?(&(pGVar1->fields).__2__current,pOVar14);
              (pGVar1->fields).__1__state = 3;
              return 1;
            }
          }
          else if ((pRVar5 != (RectTransform *)0x0) &&
                  (pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_transform((Component *)pRVar5,(MethodInfo *)0x0),
                  pTVar13 != (Transform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                      (&VStack_9,pTVar13,(MethodInfo *)0x0);
            this = (GameMeterUpdatedEffect_AnimateScale_d_6 *)0x0;
            pOVar14 = (Object *)func_?(TypeInfo__System__Int32,&this);
            (pGVar1->fields).__2__current = pOVar14;
            func_?(&(pGVar1->fields).__2__current,pOVar14);
            (pGVar1->fields).__1__state = 2;
            return 1;
          }
        }
      }
    }
    else if (pRVar5 != (RectTransform *)0x0) {
      pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pRVar5,(MethodInfo *)0x0);
      uStack_10._0_4_ = (pGVar2->fields).startSize.x;
      uStack_10._4_4_ = (pGVar2->fields).startSize.y;
      fStack_12 = (pGVar2->fields).startSize.z;
      puVar8 = (undefined8 *)func_?(&VStack_9,0);
      uVar15 = *puVar8;
      fStack_7 = *(float *)(puVar8 + 1);
      uStack_6._0_4_ = (float)uVar15;
      fVar3 = ((pGVar1->fields)._i_5__2 / (pGVar2->fields).scaleTime) *
               (pGVar2->fields).scaleStrength;
      uStack_6._4_4_ = (float)((ulonglong)uVar15 >> 0x20);
      fVar11 = (float)uStack_10 + (float)uStack_6 * fVar3;
      fStack_12 = fStack_12 + fStack_7 * fVar3;
      uStack_10._4_4_ = uStack_10._4_4_ + uStack_6._4_4_ * fVar3;
      uStack_10 = CONCAT44(uStack_10._4_4_,fVar11);
      unaff_EBX = (Transform *)0x0;
      uStack_6 = uVar15;
      if (pTVar13 != (Transform *)0x0) {
        value.y = uStack_10._4_4_;
        value.x = fVar11;
        value.z = fStack_12;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                  (pTVar13,value,(MethodInfo *)0x0);
        this = (GameMeterUpdatedEffect_AnimateScale_d_6 *)0x0;
        pOVar14 = (Object *)func_?(TypeInfo__System__Int32,&this);
        (pGVar1->fields).__2__current = pOVar14;
        func_?(&(pGVar1->fields).__2__current,pOVar14);
        (pGVar1->fields).__1__state = 1;
        return 1;
      }
    }
  }
code_?:
  uVar16 = func_?();
  out(pGVar1->klass,(short)((uint6)uVar16 >> 0x20));
  uVar17 = (uint)uVar16 & 0xffffff4c;
  pfVar4 = &(pGVar2->fields).startSize.z;
  bVar18 = *(byte *)pfVar4;
  bVar19 = (byte)((uint)unaff_EBX >> 8);
  *(byte *)pfVar4 = *(char *)pfVar4 + bVar19;
  pbVar20 = (byte *)(uVar17 + 0x26);
  bVar21 = (byte)(uVar17 >> 8);
  bVar22 = *pbVar20 + bVar21;
  bVar23 = CARRY1(*pbVar20,bVar21) || CARRY1(bVar22,CARRY1(bVar18,bVar19));
  *pbVar20 = bVar22 + CARRY1(bVar18,bVar19);
  pbVar20 = (byte *)((int)&unaff_EBX[3].klass + 3);
  bVar18 = *pbVar20;
  bVar22 = *pbVar20 + (byte)unaff_EBX;
  *pbVar20 = bVar22 + bVar23;
  ppOVar24 = &pGVar1[4].fields.__2__current;
  *(char *)ppOVar24 =
       *(char *)ppOVar24 + (char)((uint6)uVar16 >> 0x20) +
       (CARRY1(bVar18,(byte)unaff_EBX) || CARRY1(bVar22,bVar23));
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::GameMeterVisuals::GameMeterUpdatedEffect+<AnimateScale>d__6::
     GameMeterUpdatedEffect_AnimateScale_d_6_System_Collections_IEnumerator_Reset
               (GameMeterUpdatedEffect_AnimateScale_d_6 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
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

