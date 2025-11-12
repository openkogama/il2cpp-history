
/* Void <AddMaterialsToAvatarFader>b__0(IFadeParent, BaseEventData) */

void Assembly-CSharp.dll::FadeableAvatarObject+<>c__DisplayClass4_0::
     FadeableAvatarObject_c_DisplayClass4_0__AddMaterialsToAvatarFader_b__0
               (FadeableAvatarObject_c_DisplayClass4_0 *this,IFadeParent *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IFadeParent);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields).__4__this;
  if ((pFVar1 != (FadeableAvatarObject *)0x0) &&
     (pLVar2 = (pFVar1->fields).materials, pLVar2 != (List_1_UnityEngine_Material_ *)0x0)) {
    uVar3 = (this->fields).i;
    if ((uint)(pLVar2->fields)._size <= uVar3) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pMVar5 = (pLVar2->fields)._items;
    if (pMVar5 != (Material__Array *)0x0) {
      if ((uint)pMVar5->max_length <= uVar3) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (x != (IFadeParent *)0x0) {
        pMVar6 = pMVar5->vector[(int)uVar3];
        pIVar7 = x->klass;
        uVar8 = 0;
        uVar9._0_1_ = (pIVar7->_1).rank;
        uVar9._1_1_ = (pIVar7->_1).minimumAlignment;
        if (uVar9 != 0) {
          do {
            if (pIVar7->interfaceOffsets[uVar8].interfaceType ==
                (Il2CppClass *)TypeInfo__IFadeParent) {
              pVVar10 = &(pIVar7->vtable).AddFadeMaterial + pIVar7->interfaceOffsets[uVar8].offset;
              goto code_?;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar9);
        }
        pVVar10 = (VirtualInvokeData *)FUN_?(x,TypeInfo__IFadeParent,0,pMVar6,unaff_RDI);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pVVar10->methodPtr)(x,pMVar6,pVVar10->method,pVVar10->methodPtr);
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

