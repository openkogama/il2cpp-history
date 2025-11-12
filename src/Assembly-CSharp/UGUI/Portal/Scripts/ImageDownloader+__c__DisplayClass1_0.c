
/* Void <Get>b__0(WebResponse) */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::ImageDownloader+<>c__DisplayClass1_0::
     ImageDownloader_c_DisplayClass1_0__Get_b__0
               (ImageDownloader_c_DisplayClass1_0 *this,WebResponse *response,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Texture2D);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Could_not_load_image_data_into_t);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Could_not_get_game_image_from_ur);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (response != (WebResponse *)0x0) {
    if ((response->fields)._IsOk_k__BackingField == 0) {
      pAVar1 = (this->fields).onError;
      if (pAVar1 != (Action_1_String_ *)0x0) {
        pSVar2 = mscorlib.dll::System::String::String_Concat_4
                           (StringLiteral_Could_not_get_game_image_from_ur,(this->fields).url,
                            (MethodInfo *)0x0);
        (*(pAVar1->fields)._._.invoke_impl)
                  ((pAVar1->fields)._._.method_code,pSVar2,(pAVar1->fields)._._.method);
      }
    }
    else {
      this_00 = (Texture2D *)FUN_?(TypeInfo__UnityEngine__Texture2D);
      UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D__ctor_3
                (this_00,1,1,(MethodInfo *)0x0);
      pDVar3 = (this->fields).buffer;
      if (pDVar3 == (DownloadHandlerBuffer *)0x0) goto code_?;
      data = (Byte__Array *)
             (*(pDVar3->klass->vtable).GetData.methodPtr)
                       (pDVar3,(pDVar3->klass->vtable).GetData.method);
      bVar4 = UnityEngine.ImageConversionModule.dll::UnityEngine::ImageConversion::
              ImageConversion_LoadImage_1(this_00,data,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        pAVar1 = (this->fields).onError;
        if (pAVar1 != (Action_1_String_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pAVar1->fields)._._.invoke_impl)
                    ((pAVar1->fields)._._.method_code,StringLiteral_Could_not_load_image_data_into_t
                     ,(pAVar1->fields)._._.method);
          return;
        }
      }
      else {
        if (this_00 == (Texture2D *)0x0) goto code_?;
        iVar5 = (*(this_00->klass->vtable).get_width.methodPtr)
                          (this_00,(this_00->klass->vtable).get_width.method);
        iVar6 = (*(this_00->klass->vtable).get_height.methodPtr)
                          (this_00,(this_00->klass->vtable).get_height.method);
        iVar7 = (*(this_00->klass->vtable).get_width.methodPtr)
                          (this_00,(this_00->klass->vtable).get_width.method);
        pivot.x = (float)iVar7 * _UNK_?;
        iVar7 = (*(this_00->klass->vtable).get_height.methodPtr)
                          (this_00,(this_00->klass->vtable).get_height.method);
        aRStack_8[0].m_Width = (float)iVar5;
        aRStack_8[0].m_XMin = 0.0;
        aRStack_8[0].m_YMin = 0.0;
        pivot.y = (float)iVar7 * _UNK_?;
        aRStack_8[0].m_Height = (float)iVar6;
        pSVar9 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_Create_6
                           (this_00,aRStack_8,pivot,(MethodInfo *)0x0);
        pAVar10 = (this->fields).onSuccess;
        if (pAVar10 != (Action_1_UnityEngine_Sprite_ *)0x0) {
          UNRECOVERED_JUMPTABLE = (pAVar10->fields)._._.invoke_impl;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)
                    ((pAVar10->fields)._._.method_code,pSVar9,(pAVar10->fields)._._.method,
                     UNRECOVERED_JUMPTABLE);
          return;
        }
      }
    }
    return;
  }
code_?:
  FUN_?();
  UNRECOVERED_JUMPTABLE = (code *)swi(3);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

