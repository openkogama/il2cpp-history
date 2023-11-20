
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::PlayerLeftNotification::PlayerLeftNotification_Initialize
               (PlayerLeftNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral__left_);
    cRam_? = '\x01';
  }
  this_01 = data;
  PlayerNotification::PlayerNotification_Initialize
            ((PlayerNotification *)this,data,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    this_00 = (pMVar1->fields).playerContainer;
    data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(9,data._0_3_);
    key = (Object *)func_?(TypeInfo__System__Byte,(int)&data + 3);
    if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_01,key
                         ,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if ((this_00 != (MVPlayerContainer *)0x0) && (TVar2.m_Index != 0)) {
        if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        piVar3 = (int32_t *)func_?();
        pMVar4 = MVPlayerContainer::MVPlayerContainer_get_Item(this_00,*piVar3,(MethodInfo *)0x0);
        pTVar5 = (this->fields)._.NameLabel;
        if ((pMVar4 != (MVPlayer *)0x0) &&
           (pUVar6 = (pMVar4->fields)._UserProfileData_k__BackingField,
           pUVar6 != (UserProfileData *)0x0)) {
          pSVar7 = (pUVar6->fields).UserName;
          str1 = TM::TM__(StringLiteral__left_,(MethodInfo *)0x0);
          pSVar7 = mscorlib.dll::System::String::String_Concat_3(pSVar7,str1,(MethodInfo *)0x0);
          if (pTVar5 != (Text *)0x0) {
            (*(code *)(pTVar5->klass->vtable).set_text.method)(pTVar5,pSVar7);
            return;
          }
        }
      }
    }
  }
  TVar2.m_Index = func_?();
code_?:
  func_?(TVar2.m_Index);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

