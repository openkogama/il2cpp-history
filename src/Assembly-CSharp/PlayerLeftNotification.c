
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::PlayerLeftNotification::PlayerLeftNotification_Initialize
               (PlayerLeftNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = data;
  PlayerNotification::PlayerNotification_Initialize
            ((PlayerNotification *)this,data,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVAvatar *)0x0) {
    this_02 = MVAvatar::MVAvatar_get_Shield(this_01,(MethodInfo *)0x0);
    data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(9,data._0_3_);
    key = (Type *)func_?(TypeInfo__System__Byte,(int)&data + 3);
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)this_00,key,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if ((this_02 != (MVRuntimeDataVariableClampedFloat *)0x0) && (pPVar1 != (Pool *)0x0)) {
        if ((pPVar1->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar2 = (int32_t *)func_?();
        this_03 = MVPlayerContainer::MVPlayerContainer_get_Item
                            ((MVPlayerContainer *)this_02,*piVar2,(MethodInfo *)0x0);
        pTVar3 = (this->fields)._.NameLabel;
        if (this_03 != (MVPlayer *)0x0) {
          iVar4 = GamePointGainEffect::GamePointGainEffect_get_ID
                            ((GamePointGainEffect *)this_03,(MethodInfo *)0x0);
          if (iVar4 != 0) {
            pSVar5 = *(String **)(iVar4 + 0xc);
            str1 = TM::TM__(StringLiteral__left_,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__String);
            }
            pSVar5 = mscorlib.dll::System::String::String_Concat_2(pSVar5,str1,(MethodInfo *)0x0);
            if (pTVar3 != (Text *)0x0) {
              (*(code *)(pTVar3->klass->vtable).set_text.method)(pTVar3,pSVar5);
              return;
            }
          }
        }
      }
    }
  }
  pPVar1 = (Pool *)func_?();
code_?:
  func_?(pPVar1);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

