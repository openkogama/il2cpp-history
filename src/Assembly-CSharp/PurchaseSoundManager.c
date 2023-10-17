
/* Void PlayPurchaseSound() */

void Assembly-CSharp.dll::PurchaseSoundManager::PurchaseSoundManager_PlayPurchaseSound
               (PurchaseSoundManager *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pAVar2 = (this->fields).purchaseSound;
  if (pAVar2 != (AudioSource *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    puStack_1 = (undefined1 *)0x0;
    puStack_3 = (undefined *)0x0;
    pAStack_4 = pAVar2;
    (*pcRam_?)();
    return;
  }
  uVar5 = func_?(&pAStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ProductPurchaseResponseHandler(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::PurchaseSoundManager::PurchaseSoundManager_ProductPurchaseResponseHandler
               (PurchaseSoundManager *this,int32_t returnCode,
               Dictionary_2_System_Object_System_Object_ *purchaseResponseData,MethodInfo *method)

{
  if ((this->fields).surpressSound == 0) {
    if (returnCode == 0) {
      this_00 = (this->fields).purchaseSound;
      if (this_00 != (AudioSource *)0x0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play
                  (this_00,(MethodInfo *)0x0);
        return;
      }
      uVar1 = func_?(&puStack_2);
      func_?(uVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    (this->fields).surpressSound = 0;
  }
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::PurchaseSoundManager::PurchaseSoundManager_Start
               (PurchaseSoundManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                   );
    func_?(&
                    MethodInfo__PurchaseSoundManager__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    unaff_EBX = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object___Class
                 *)(pMVar1->fields).PurchaseProductResponseHandler;
    this_00 = (Action_2_Int32Enum_Object_ *)
              func_?(
                             TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                             );
    if (this_00 != (Action_2_Int32Enum_Object_ *)0x0) {
      mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__PurchaseSoundManager__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 ,(MethodInfo *)0x0);
      pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)unaff_EBX,(Delegate *)this_00,(MethodInfo *)0x0);
      unaff_EBX = 
      TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
      ;
      if (pDVar2 == (Delegate *)0x0) {
        (pMVar1->fields).PurchaseProductResponseHandler =
             (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             0x0;
        pAStack3 =
             (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object___Class
              *)0x0;
code_?:
        func_?();
        return;
      }
      pAStack3 =
           TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
      ;
      pAVar4 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                *)func_?();
      if (pAVar4 != (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                     *)0x0) {
        (pMVar1->fields).PurchaseProductResponseHandler = pAVar4;
        unaff_EBX = 
        TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
        ;
        pAStack3 =
             TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
        ;
        pAStack3 =
             (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object___Class
              *)func_?();
        if (pAStack3 !=
            (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object___Class
             *)0x0) goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  pAStack3 = unaff_EBX;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

