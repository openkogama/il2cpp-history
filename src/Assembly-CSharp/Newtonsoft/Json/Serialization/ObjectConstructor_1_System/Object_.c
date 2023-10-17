
/* ObjectConstructor`1[System.Object](Object, IntPtr) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::ObjectConstructor`1[System::Object]::
     ObjectConstructor_1_System_Object___ctor
               (ObjectConstructor_1_System_Object_ *this,Object *object,void *method_1,
               MethodInfo *method)

{
  pvVar1 = (void *)func_?(method_1);
  (this->fields)._._.method_ptr = pvVar1;
  (this->fields)._._.m_target = object;
  (this->fields)._._.method = method_1;
  func_?(&(this->fields)._._.m_target,object);
  cVar2 = *(char *)((int)method_1 + 0x2e);
  (this->fields)._._.method_code = this;
  cVar3 = func_?(method_1);
  if (cVar3 == '\0') {
    if (cVar2 != '\0') {
      if (object != (Object *)0x0) {
        pvVar1 = (this->fields)._._.method_ptr;
        (this->fields)._._.method_code = (this->fields)._._.m_target;
        (this->fields)._._.invoke_impl = pvVar1;
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
      if (cVar2 == '\0') {
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
  if ((*(byte *)((int)method_1 + 0x2f) & 0x10) != 0) {
    puVar6 = &UNK_?;
    if (cVar2 != '\x01') {
      puVar6 = &UNK_?;
    }
    (this->fields)._._.invoke_impl = puVar6;
    (this->fields)._._.extra_arg = &UNK_?;
    return;
  }
  if (cVar2 == '\x01') {
    (this->fields)._._.invoke_impl = &UNK_?;
    (this->fields)._._.extra_arg = &UNK_?;
    return;
  }
  pvVar1 = (this->fields)._._.method_ptr;
  (this->fields)._._.method_code = (this->fields)._._.m_target;
  (this->fields)._._.invoke_impl = pvVar1;
  (this->fields)._._.extra_arg = &UNK_?;
  return;
}

