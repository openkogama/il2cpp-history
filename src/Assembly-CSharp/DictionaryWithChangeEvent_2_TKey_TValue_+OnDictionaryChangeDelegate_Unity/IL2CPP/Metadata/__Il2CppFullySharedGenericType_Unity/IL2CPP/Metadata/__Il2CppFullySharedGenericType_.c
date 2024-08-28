
/* DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType](Object,
   IntPtr) */

void Assembly-CSharp.dll::DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity
     ::IL2CPP::Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
               (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,Object *object,void *method_1,MethodInfo *method)

{
  ppOVar1 = &(this->fields)._._.m_target;
  (this->fields)._._.method_ptr = *(void **)((int)method_1 + 4);
  (this->fields)._._.method = method_1;
  *ppOVar1 = object;
  func_?(ppOVar1,object);
  cVar2 = *(char *)((int)method_1 + 0x2e);
  (this->fields)._._.method_code = this;
  cVar3 = func_?(method_1);
  if (cVar3 != '\0') {
    if (cVar2 == '\x01') {
      (this->fields)._._.invoke_impl = &UNK_?;
      (this->fields)._._.extra_arg = &UNK_?;
      return;
    }
    (this->fields)._._.method_code = *ppOVar1;
    (this->fields)._._.invoke_impl = (this->fields)._._.method_ptr;
    (this->fields)._._.extra_arg = &UNK_?;
    return;
  }
  if (cVar2 != '\0') {
    if (object != (Object *)0x0) {
      (this->fields)._._.invoke_impl = (this->fields)._._.method_ptr;
      (this->fields)._._.method_code = *ppOVar1;
      (this->fields)._._.extra_arg = &UNK_?;
      return;
    }
    uVar4 = func_?(0,&UNK_?,0);
    func_?(uVar4);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((this->fields)._._.method_is_virtual != 0) {
    cVar2 = func_?(method_1);
    if (cVar2 != '\0') {
      cVar2 = func_?(method_1);
      puVar6 = &UNK_?;
      if (cVar2 != '\0') {
        puVar6 = &UNK_?;
      }
      (this->fields)._._.invoke_impl = puVar6;
      (this->fields)._._.extra_arg = &UNK_?;
      return;
    }
    cVar2 = func_?(method_1);
    puVar6 = &UNK_?;
    if (cVar2 != '\0') {
      puVar6 = &UNK_?;
    }
    (this->fields)._._.invoke_impl = puVar6;
    (this->fields)._._.extra_arg = &UNK_?;
    return;
  }
  (this->fields)._._.invoke_impl = &UNK_?;
  (this->fields)._._.extra_arg = &UNK_?;
  return;
}

