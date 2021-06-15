
/* IAsyncResult BeginInvoke(Single, AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::SizeModifier+ActionDelegate::SizeModifier_ActionDelegate_BeginInvoke
          (SizeModifier_ActionDelegate *this,float time,AsyncCallback *callback,Object *object,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uVar2 = func_?(TypeInfo__System__Single,&time);
  uStack_1 = CONCAT44(uStack_1._4_4_,uVar2);
  pIVar3 = (IAsyncResult *)func_?(this,&uStack_1,callback,object);
  return pIVar3;
}

