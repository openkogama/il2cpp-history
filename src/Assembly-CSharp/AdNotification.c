
/* AdNotification() */

void Assembly-CSharp.dll::AdNotification::AdNotification__ctor
               (AdNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* NotificationLifetime get_Lifetime() */

NotificationLifetime__Enum
Assembly-CSharp.dll::AdNotification::AdNotification_get_Lifetime
          (AdNotification *this,MethodInfo *method)

{
  return NotificationLifetime__Enum_Low;
}

