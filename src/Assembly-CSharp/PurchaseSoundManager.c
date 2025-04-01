
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
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
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
  if (pMVar1 == (MVNetworkGame *)0x0) {
    func_?();
  }
  else {
    pAVar2 = (pMVar1->fields).PurchaseProductResponseHandler;
    ppAVar3 = &(pMVar1->fields).PurchaseProductResponseHandler;
    this_00 = (UnityAction_2_System_Int32_System_Int32_ *)
              func_?(
                             TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
    UnityAction_2_System_Int32_System_Int32___ctor
              (this_00,(Object *)this,
               MethodInfo__PurchaseSoundManager__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ,(MethodInfo *)0x0);
    pAStack4 =
         (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object___Class
          *)mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    unaff_EDI = 
    TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
    ;
    if (pAStack4 ==
        (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object___Class
         *)0x0) {
      *ppAVar3 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                  *)0x0;
      func_?();
      return;
    }
    pAStack4 =
         TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
    ;
    pAVar2 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             func_?();
    if (pAVar2 != (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                   *)0x0) {
      *ppAVar3 = pAVar2;
      unaff_EDI = 
      TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
      ;
      pAStack4 =
           TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
      ;
      pAStack4 =
           (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object___Class
            *)func_?();
      if (pAStack4 !=
          (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object___Class
           *)0x0) {
        func_?();
        return;
      }
    }
  }
  pAStack4 = unaff_EDI;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

