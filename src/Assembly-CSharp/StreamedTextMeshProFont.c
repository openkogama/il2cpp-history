
/* Void OnAssetSet() */

void Assembly-CSharp.dll::StreamedTextMeshProFont::StreamedTextMeshProFont_OnAssetSet
               (StreamedTextMeshProFont *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StreamedTextMeshProFont__IReceiver);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__StreamingAsset<TMPro::TMP_FontAsset,_TMPro::TMP_FontAsset>__get_Asset__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).receiver == (StreamedTextMeshProFont_IReceiver *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_00 == (Transform *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                       ((Object_1 *)this_00,(MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_Reciever_is_not_set_for_font_str,pSVar2,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar3 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar3 != (ILogger_1 *)0x0) {
      FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar3,0,pSVar2);
      return;
    }
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pSVar4 = (this->fields).receiver;
  uVar5 = 0;
  pTVar6 = (this->fields)._.asset;
  pSVar7 = pSVar4->klass;
  uVar8._0_1_ = (pSVar7->_1).rank;
  uVar8._1_1_ = (pSVar7->_1).minimumAlignment;
  if (uVar8 != 0) {
    do {
      if (pSVar7->interfaceOffsets[uVar5].interfaceType ==
          (Il2CppClass *)TypeInfo__StreamedTextMeshProFont__IReceiver) {
        pSVar9 = &pSVar7->vtable + pSVar7->interfaceOffsets[uVar5].offset;
        goto code_?;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar8);
  }
  pSVar9 = (StreamedTextMeshProFont_IReceiver__VTable *)
           FUN_?(pSVar4,TypeInfo__StreamedTextMeshProFont__IReceiver,0);
code_?:
  UNRECOVERED_JUMPTABLE = (pSVar9->OnFontReceived).methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pSVar4,pTVar6,(pSVar9->OnFontReceived).method,UNRECOVERED_JUMPTABLE);
  return;
}

