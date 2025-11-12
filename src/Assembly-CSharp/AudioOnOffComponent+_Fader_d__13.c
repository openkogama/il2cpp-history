
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::AudioOnOffComponent+<Fader>d__13::AudioOnOffComponent_Fader_d_13_MoveNext
               (AudioOnOffComponent_Fader_d_13 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_End__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pOVar2 = (Object *)0x0;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    (this->fields)._counter_5__2 = 0.0;
    if (this_00 == (AudioOnOffComponent *)0x0) goto code_?;
    (this->fields)._startFade_5__3 = (this_00->fields).fadeNum;
    pAVar3 = (this_00->fields).onOffAudioSource;
    if (pAVar3 == (AudioSource *)0x0) goto code_?;
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
              (pAVar3,(this_00->fields).fadeNum,(MethodInfo *)0x0);
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                       ((this->fields).minEndPoint,(this->fields).maxEndPoint,(MethodInfo *)0x0);
    (this->fields)._fadeToNum_5__4 = fVar4;
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
  }
  pfVar5 = &(this->fields)._counter_5__2;
  if (*pfVar5 <= _UNK_? && _UNK_? != *pfVar5) {
    fVar4 = (this->fields)._counter_5__2;
    fVar6 = (this->fields)._startFade_5__3;
    if (fVar4 < 0.0) {
      fVar4 = 0.0;
    }
    else if (_UNK_? < fVar4) {
      fVar4 = _UNK_?;
    }
    if (this_00 != (AudioOnOffComponent *)0x0) {
      fStackX_8 = ((this->fields)._fadeToNum_5__4 - fVar6) * fVar4 + fVar6;
      (this_00->fields).fadeNum = fStackX_8;
      message = (Object *)FUN_?(uRam_?);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(message,(MethodInfo *)0x0);
      pAVar3 = (this_00->fields).onOffAudioSource;
      if (pAVar3 != (AudioSource *)0x0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                  (pAVar3,(this_00->fields).fadeNum,(MethodInfo *)0x0);
        fVar4 = (this->fields)._counter_5__2;
        pcVar7 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
          uVar8 = func_?(&UNK_?);
          FUN_?(uVar8,0);
          pcVar7 = (code *)swi(3);
          bVar9 = (*pcVar7)();
          return bVar9;
        }
        pcRam_? = pcVar7;
        fVar6 = (float)(*pcRam_?)();
        fStackX_8 = 0.0;
        (this->fields)._counter_5__2 = fVar6 * (this_00->fields).fadeSpeed + fVar4;
        lVar10 = lRam_?;
        if (*(int *)(lRam_? + 0x28) < 0) {
          if ((*(longlong *)(lRam_? + 0x60) == 0) ||
             ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
            pOVar2 = (Object *)FUN_?(lRam_?);
            FUN_?(pOVar2 + 1,&fStackX_8,(longlong)*(int *)(lVar10 + 0xf8) + -0x10);
            if (iRam_? != 0) {
              uVar11 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
              uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
              do {
                uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
                puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
                LOCK();
                bVar15 = uVar13 == *puVar14;
                if (bVar15) {
                  *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
                }
                UNLOCK();
              } while (!bVar15);
            }
          }
        }
        else {
          pOVar2 = (Object *)((ulonglong)uStackX_c << 0x20);
        }
        bVar15 = iRam_? != 0;
        (this->fields).__2__current = pOVar2;
        if (bVar15) {
          uVar11 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
          uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
          do {
            uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
            puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
            LOCK();
            bVar15 = uVar13 == *puVar14;
            if (bVar15) {
              *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
            }
            UNLOCK();
          } while (!bVar15);
        }
        (this->fields).__1__state = 1;
        return 1;
      }
    }
  }
  else if (this_00 != (AudioOnOffComponent *)0x0) {
    pAVar3 = (this_00->fields).onOffAudioSource;
    fVar4 = (this->fields)._fadeToNum_5__4;
    (this_00->fields).fadeNum = fVar4;
    if (pAVar3 != (AudioSource *)0x0) {
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                (pAVar3,fVar4,(MethodInfo *)0x0);
      pSVar16 = mscorlib.dll::System::Single::Single_ToString
                          ((Single *)&(this_00->fields).fadeNum,(MethodInfo *)0x0);
      pSVar16 = mscorlib.dll::System::String::String_Concat_4
                          (StringLiteral_End__,pSVar16,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar16,(MethodInfo *)0x0);
      routine = AudioOnOffComponent::AudioOnOffComponent_Fader
                          (this_00,(this->fields).minEndPoint,(this->fields).maxEndPoint,
                           (MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
                ((MonoBehaviour *)this_00,routine,(MethodInfo *)0x0);
      return 0;
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar9 = (*pcVar7)();
  return bVar9;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::AudioOnOffComponent+<Fader>d__13::
     AudioOnOffComponent_Fader_d_13_System_Collections_IEnumerator_Reset
               (AudioOnOffComponent_Fader_d_13 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__AudioOnOffComponent___Fader_d__13__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

