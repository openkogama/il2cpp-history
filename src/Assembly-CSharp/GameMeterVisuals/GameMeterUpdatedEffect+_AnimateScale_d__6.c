
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
    cVar5 = (POPCOUNT((uint)pGVar2 & 0xff) & 1U) == 0;
    cVar6 = true;
    if (pGVar2 == (GameMeterUpdatedEffect *)0x0) goto code_?;
    goto code_?;
  case 3:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
  cVar4 = (int)pGVar2 < 0;
  cVar6 = pGVar2 == (GameMeterUpdatedEffect *)0x0;
  cVar5 = (POPCOUNT((uint)pGVar2 & 0xff) & 1U) == 0;
  if (!(bool)cVar6) {
    fVar3 = (pGVar2->fields).scaleTime;
    pfVar7 = &(pGVar1->fields)._i_5__2;
    in_AF = '\0';
    pRVar8 = (pGVar2->fields).scaleTarget;
    if (fVar3 < *pfVar7 || fVar3 == *pfVar7) {
      cVar4 = (int)pRVar8 < 0;
      cVar6 = pRVar8 == (RectTransform *)0x0;
      cVar5 = (POPCOUNT((uint)pRVar8 & 0xff) & 1U) == 0;
      if (!(bool)cVar6) {
        unaff_EBX = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pRVar8,(MethodInfo *)0x0);
        uStack_9._0_4_ = (pGVar2->fields).startSize.x;
        uStack_9._4_4_ = (pGVar2->fields).startSize.y;
        fStack_10 = (pGVar2->fields).startSize.z;
        puVar11 = (undefined8 *)func_?(&VStack_12,0);
        fVar3 = (pGVar2->fields).scaleStrength;
        uStack_13._0_4_ = (float)*puVar11;
        uStack_13._4_4_ = (float)((ulonglong)*puVar11 >> 0x20);
        fVar14 = (float)uStack_9 + (float)uStack_13 * fVar3;
        fStack_15 = fStack_10 + *(float *)(puVar11 + 1) * fVar3;
        fVar3 = uStack_9._4_4_ + uStack_13._4_4_ * fVar3;
        uStack_13 = CONCAT44(fVar3,fVar14);
        cVar4 = (int)unaff_EBX < 0;
        cVar6 = unaff_EBX == (Transform *)0x0;
        cVar5 = (POPCOUNT((uint)unaff_EBX & 0xff) & 1U) == 0;
        if (!(bool)cVar6) {
          value_00.y = fVar3;
          value_00.x = fVar14;
          value_00.z = fStack_15;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                    (unaff_EBX,value_00,(MethodInfo *)0x0);
          (pGVar1->fields)._i_5__2 = 0.0;
code_?:
          fVar3 = (pGVar2->fields).scaleTime;
          pfVar7 = &(pGVar1->fields)._i_5__2;
          in_AF = '\0';
          pRVar8 = (pGVar2->fields).scaleTarget;
          if (fVar3 < *pfVar7 || fVar3 == *pfVar7) {
            cVar4 = (int)pRVar8 < 0;
            cVar6 = pRVar8 == (RectTransform *)0x0;
            cVar5 = (POPCOUNT((uint)pRVar8 & 0xff) & 1U) == 0;
            if (!(bool)cVar6) {
              pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pRVar8,(MethodInfo *)0x0);
              cVar4 = (int)pTVar16 < 0;
              cVar6 = pTVar16 == (Transform *)0x0;
              cVar5 = (POPCOUNT((uint)pTVar16 & 0xff) & 1U) == 0;
              if (!(bool)cVar6) {
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
            cVar4 = (int)pRVar8 < 0;
            cVar6 = pRVar8 == (RectTransform *)0x0;
            cVar5 = (POPCOUNT((uint)pRVar8 & 0xff) & 1U) == 0;
            if (!(bool)cVar6) {
              pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pRVar8,(MethodInfo *)0x0);
              cVar4 = (int)pTVar16 < 0;
              cVar6 = pTVar16 == (Transform *)0x0;
              cVar5 = (POPCOUNT((uint)pTVar16 & 0xff) & 1U) == 0;
              if (!(bool)cVar6) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                          (&VStack_12,pTVar16,(MethodInfo *)0x0);
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
      cVar4 = (int)pRVar8 < 0;
      cVar6 = pRVar8 == (RectTransform *)0x0;
      cVar5 = (POPCOUNT((uint)pRVar8 & 0xff) & 1U) == 0;
      if (!(bool)cVar6) {
        pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pRVar8,(MethodInfo *)0x0);
        uStack_13._0_4_ = (pGVar2->fields).startSize.x;
        uStack_13._4_4_ = (pGVar2->fields).startSize.y;
        fStack_15 = (pGVar2->fields).startSize.z;
        puVar11 = (undefined8 *)func_?(&VStack_12,0);
        uVar18 = *puVar11;
        fStack_10 = *(float *)(puVar11 + 1);
        uStack_9._0_4_ = (float)uVar18;
        fVar3 = ((pGVar1->fields)._i_5__2 / (pGVar2->fields).scaleTime) *
                 (pGVar2->fields).scaleStrength;
        uStack_9._4_4_ = (float)((ulonglong)uVar18 >> 0x20);
        fVar14 = (float)uStack_13 + (float)uStack_9 * fVar3;
        fStack_15 = fStack_15 + fStack_10 * fVar3;
        uStack_13._4_4_ = uStack_13._4_4_ + uStack_9._4_4_ * fVar3;
        uStack_13 = CONCAT44(uStack_13._4_4_,fVar14);
        cVar4 = (int)pTVar16 < 0;
        cVar6 = pTVar16 == (Transform *)0x0;
        cVar5 = (POPCOUNT((uint)pTVar16 & 0xff) & 1U) == 0;
        unaff_EBX = (Transform *)0x0;
        uStack_9 = uVar18;
        if (!(bool)cVar6) {
          value.y = uStack_13._4_4_;
          value.x = fVar14;
          value.z = fStack_15;
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
  bVar19 = 0;
  uVar20 = func_?();
  ppMVar21 = &unaff_EBX[1].monitor;
  *ppMVar21 = (MonitorData *)
             ((uint)*ppMVar21 >> (extraout_CL & 0x1f) | (int)*ppMVar21 << 0x20 - (extraout_CL & 0x1f))
  ;
  pGVar22 = pGVar2->klass;
  ppMVar21 = &unaff_EBX[1].monitor;
  bVar23 = extraout_CL & 0x1f;
  *ppMVar21 = (MonitorData *)((uint)*ppMVar21 >> bVar23 | (int)*ppMVar21 << 0x20 - bVar23);
  pcVar24 = (char *)((int)&unaff_EBX[0x72c0651].fields._._.m_CachedPtr + 2);
  *pcVar24 = *pcVar24 + extraout_CL +
            ((bVar23 == 0) *
             ((GameMeterUpdatedEffect__Class *)
              CONCAT22((short)((uint)uVar20 >> 0x10),
                       CONCAT11(cVar4 << 7 | cVar6 << 6 | in_AF << 4 | cVar5 << 2 | 2U | bVar19,
                                (char)uVar20)) < pGVar22) | (bVar23 != 0) * ((int)*ppMVar21 < 0));
  uVar20 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar20);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar20 = func_?(&
                           MethodInfo__GameMeterVisuals__GameMeterUpdatedEffect___AnimateScale_d__6__System_Collections_IEnumerator_Reset__
                          );
  func_?(this_00,uVar20);
  pcVar25 = (code *)swi(3);
  bVar26 = (*pcVar25)();
  return bVar26;
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

