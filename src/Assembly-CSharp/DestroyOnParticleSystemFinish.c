
/* Void Start() */

void Assembly-CSharp.dll::DestroyOnParticleSystemFinish::DestroyOnParticleSystemFinish_Start
               (DestroyOnParticleSystemFinish *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                  ((Component *)this,(MethodInfo *)0x0);
  pPVar1 = (this->fields).system;
  if (pPVar1 != (ParticleSystem *)0x0) {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&pPStackX_18 >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    pcVar7 = pcRam_?;
    pPStackX_8 = pPVar1;
    pPStackX_18 = pPVar1;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcRam_? = pcVar7;
    fVar9 = (float)(*pcRam_?)(&pPStackX_8);
    pPVar1 = (this->fields).system;
    if (pPVar1 != (ParticleSystem *)0x0) {
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&pPStackX_18 >> 0xc);
        uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
        do {
          uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
          puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
          LOCK();
          bVar6 = uVar4 == *puVar5;
          if (bVar6) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      PStack_10.m_Mode = 0;
      PStack_10.m_CurveMultiplier = 0.0;
      PStack_10.m_CurveMin = (AnimationCurve *)0x0;
      PStack_10.m_CurveMax = (AnimationCurve *)0x0;
      PStack_10.m_ConstantMin = 0.0;
      PStack_10.m_ConstantMax = 0.0;
      pcVar7 = pcRam_?;
      pPStackX_8 = pPVar1;
      pPStackX_18 = pPVar1;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcRam_? = pcVar7;
      (*pcRam_?)(&pPStackX_8,&PStack_10);
      aPStack_11[0].m_Mode = PStack_10.m_Mode;
      aPStack_11[0].m_CurveMultiplier = PStack_10.m_CurveMultiplier;
      aPStack_11[0].m_CurveMin = PStack_10.m_CurveMin;
      aPStack_11[0].m_CurveMax = PStack_10.m_CurveMax;
      aPStack_11[0].m_ConstantMin = PStack_10.m_ConstantMin;
      aPStack_11[0].m_ConstantMax = PStack_10.m_ConstantMax;
      pPVar12 = UnityEngine.ParticleSystemModule.dll::UnityEngine::
               ParticleSystem+MinMaxCurveBlittable::ParticleSystem_MinMaxCurveBlittable_op_Implicit
                         (&PStack_10,(ParticleSystem_MinMaxCurveBlittable *)aPStack_11,
                          (MethodInfo *)0x0);
      fVar13 = pPVar12->m_ConstantMax;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)obj,fVar13 + fVar9,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

